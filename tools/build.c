#include <time.h>
#include <stdio.h>
#include <wchar.h>
#include <string.h>

/* Total sources/modules files exclude DEF file */
const char* filenames[] = {
    "../src/hlsltypes.h",
    "../src/hlslcommon.h",
      
    "../src/hlslint.h",
    "../src/hlslint2.h",
    "../src/hlslint3.h",
    "../src/hlslint4.h",
    "../src/hlsluint.h",
    "../src/hlslfloat.h",
    "../src/hlslfloat2.h",
    "../src/hlslfloat3.h",
    "../src/hlslfloat4.h",
        
    "../src/hlslfloat2x2.h",
    "../src/hlslfloat3x3.h",
    "../src/hlslfloat4x4.h",
};

/* Byte order mark of UTF-8 */
const unsigned char utf8BOM[3] = { 0xEF, 0xBB, 0xBF };

/* Byte order mark of UTF-16 little edian */
const unsigned char utf16LEBOM[2] = { 0xFF, 0xFE };

size_t utf16_normalize(wchar_t* buf, size_t size, size_t len)
{
    size_t newlen = len > size ? size : len;
    for (int i = 0; i < newlen; i++)
    {
        int c = buf[i];

        /* Change CRLF to LF only */
        if (c == '\r')
        {
            for (int j = i; j < newlen; j++)
            {
                buf[j] = buf[j + 1];
            }
            
            i--;
            newlen--;
        }
    }
    return newlen;
}

size_t utf8_normalize(char* buf, size_t size, size_t len)
{
    int c;
    int utf8_type = 1;
    int utf8_1 = 0;
    int utf8_2 = 0;
    int utf8_3 = 0;
    int utf8_4 = 0;
    int byte_count = 0;
    int expected_byte_count = 0;
    
    size_t newlen = len > size ? size : len;
    for (int i = 0; i < newlen; i++)
    {
        int c = buf[i];

        /* Change CRLF to LF only */
        if (c == '\r')
        {
            for (int j = i; j < newlen; j++)
            {
                buf[j] = buf[j + 1];
            }
            
            i--;
            newlen--;

            continue;
        }

        /* Finding invalid utf8 character */
        switch (utf8_type)
        {
        case 1:
            if ((c & 0x80))
            {
                if ((c & 0xE0) == 0xC0)
                {
                    utf8_1 = c;
                    utf8_type = 2;
                    byte_count = 1;
                    expected_byte_count = 2;
                    break;
                }

                if ((c & 0xF0) == 0xE0)
                {
                    utf8_1 = c;
                    utf8_type = 2;
                    byte_count = 1;
                    expected_byte_count = 3;
                    break;
                }

                if ((c & 0xf8) == 0xf0)
                {
                    utf8_1 = c;
                    utf8_type = 2;
                    byte_count = 1;
                    expected_byte_count = 4;
                    break;
                }
                
                break;
            }
            break;
            
        case 2:
        case 3:
        case 4:
            if ((c & 0xC0) == 0x80)
            {
                if (utf8_type == expected_byte_count)
                {
                    utf8_type = 1;
                    break;
                }

                byte_count = utf8_type;
                utf8_type++;
                
                if (utf8_type == 5)
                {
                    i -= byte_count;
                    for (int j = i; j < newlen; j++)
                    {
                        buf[j] = buf[j + byte_count + 1];  
                    }
                    newlen -= byte_count;
                    utf8_type = 1;
                }

                break;
            }
            
            utf8_type = 1;
            break;
            
        default:
            utf8_type = 1;
            break;
        }
    }
    return newlen;
}

/* Concatenate all srcfile content to dstfile
 * cat srcfile > dstfile
 */
static void file_concat(FILE* dstfile, const char* srcfilename)
{
    FILE* srcfile = fopen(srcfilename, "r");
    if (srcfile)
    {
        unsigned char bom[2]; /* First 2 bytes byte-order-mark */
        fread(bom, sizeof(bom), 1, srcfile);
        if (bom[0] == utf16LEBOM[0] && bom[1] == utf16LEBOM[1])
        {
            // UTF16 little edian
                
            char    mbstr[2048];
            wchar_t wcstr[1024];
            while (!feof(srcfile))
            {
                size_t readbytes = fread(wcstr, sizeof(wcstr[0]), sizeof(wcstr) / sizeof(wcstr[0]), srcfile);
                readbytes = utf16_normalize(wcstr, sizeof(wcstr) / sizeof(wcstr[0]), readbytes);
                if (wcstr[readbytes - 1] == 0)
                {
                    readbytes--;
                }
                    
                mbstate_t mbstate;
                if (!mbsinit(&mbstate))
                {
                    memset(&mbstate, 0, sizeof(mbstate));
                }
                    
                char* mbptr = mbstr;
                size_t mblen = 0;
                wcsrtombs(mbptr, (void*)&wcstr, sizeof(mbstr), &mbstate);

                fwrite(mbstr, 1, mblen, dstfile);
            }
        }
        else 
        {
            // UTF8 or ASCII
                
            unsigned char lastBOM;
            fread(&lastBOM, sizeof(lastBOM), 1, srcfile);
            if (bom[0] != utf8BOM[0] || bom[1] != utf8BOM[1] || lastBOM != utf8BOM[2])
            {
                fwrite(bom, sizeof(bom), 1, dstfile);
                fwrite(&lastBOM, sizeof(lastBOM), 1, dstfile);
            }
                
            char buffer[1024];
            while (!feof(srcfile))
            {
                size_t readbytes = fread(buffer, 1, sizeof(buffer), srcfile);
                readbytes = utf8_normalize(buffer, sizeof(buffer), readbytes);
                if (buffer[readbytes - 1] == 0)
                {
                    readbytes--;
                }
                    
                fwrite(buffer, 1, readbytes, dstfile);
            }
        }

        /* Add separator line */
        fputc('\n', dstfile);
            
        /* Done with current file */
        fclose(srcfile);
    }
}

int main(int argc, char* argv[])
{
    const char* namespace = NULL;
    const char* outputfile = "../hlslmath.h";
    
    for (int i = 1; i < argc; i++)
    {
        const char* option = argv[i];
        if (strcmp(option, "--help") == 0)
        {
            printf(
                "HLSL Math build tools\n"
                "Usage: %s [Options]\n\n"
                "--help               Print this message.\n"
                "--output=<file>      Output file path. Default: ../hlslmath.h\n"
                "--namespace=<name>   Namespace of hlslmath. Default: NULL\n",
                argv[0]);
            return 0;
        }
        else if (strncmp(option, "--namespace=", 12) == 0)
        {
            if (namespace == NULL)
            {
                namespace = option + 12;
            }
            else
            {
                fprintf(stderr, "Too many namespace presented\n");
                return -1;
            }
        }
        else if (strncmp(option, "--output=", 9) == 0)
        {
            outputfile = option + 9;
        }
        else
        {
            fprintf(stderr, "Unknown options '%s'. Try: `%s --help` for more detail.\n", option, argv[0]);
            return -1;
        }
    }
    
    FILE* targetFile = fopen(outputfile, "w+");
    if (!targetFile)
    {
        fprintf(stderr, "Cannot create or write file '%s'", outputfile);
        return -1;
    }

    /* Mark targetFile as utf8 format */
    fwrite(utf8BOM, 1, sizeof(utf8BOM), targetFile);

    /* Header of file */
    do
    {
        char timestr[32];
        struct tm* timeinfo;
        
        time_t rawtime = time(NULL);
        timeinfo = localtime(&rawtime);
        strftime(timestr, sizeof(timestr), "%c", timeinfo);
        
        fprintf(targetFile, "// Generate with hlslmath/tools/%s\n", argv[0]);
        fprintf(targetFile, "// Filename: %s\n", outputfile);
        fprintf(targetFile, "// Datetime: %s\n\n", timestr);
    } while (0);

    /* Include hlsldef.h before other modules */
    do
    {
        file_concat(targetFile, "../src/hlsldef.h");
    } while (0);

    /* Begin of namespace */
    if (namespace && strlen(namespace) > 0)
    {
        fprintf(targetFile, "namespace %s\n{\n", namespace);
    }
    
    /* Concatenate all files to targetFile */
    for (int i = 0; i < sizeof(filenames) / sizeof(filenames[0]); i++)
    {
        file_concat(targetFile, filenames[i]);
    }

    /* End of namespace */
    if (namespace && strlen(namespace) > 0)
    {
        fprintf(targetFile, "\n}\n");
    }

    /* End of file */
    fprintf(targetFile, "// File '%s' end here.\n", outputfile); 

    /* Job done, close before quit */
    fclose(targetFile);
    return 0;
}
