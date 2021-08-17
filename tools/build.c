#define _CRT_SECURE_NO_WARNINGS

#include <time.h>
#include <stdio.h>
#include <ctype.h>
#include <wchar.h>
#include <string.h>

#if (defined(__unix__) && !defined(__CYGWIN__)) || defined(__APPLE__)
#define __UNIX__ 1
#include <unistd.h>
#else
#define __WINDOWS__
#include <Windows.h>
#endif

#define HLSL_MATH_VERCODE 100  // x/xx
#define HLSL_MATH_VERSION "v1.0"

/* Total sources/modules files exclude DEF file */
const char* filenames[] = {
    "../src/submodules/types/int2.type.h",
    "../src/submodules/types/int3.type.h",
    "../src/submodules/types/int4.type.h",
    "../src/submodules/types/uint2.type.h",
    "../src/submodules/types/uint3.type.h",
    "../src/submodules/types/uint4.type.h",
    "../src/submodules/types/bool2.type.h",
    "../src/submodules/types/bool3.type.h",
    "../src/submodules/types/bool4.type.h",
    "../src/submodules/types/float2.type.h",
    "../src/submodules/types/float3.type.h",
    "../src/submodules/types/float4.type.h",
    
    "../src/submodules/types/int2x2.type.h",
    "../src/submodules/types/int3x3.type.h",
    "../src/submodules/types/int4x4.type.h",
    "../src/submodules/types/uint2x2.type.h",
    "../src/submodules/types/uint3x3.type.h",
    "../src/submodules/types/uint4x4.type.h",
    "../src/submodules/types/bool2x2.type.h",
    "../src/submodules/types/bool3x3.type.h",
    "../src/submodules/types/bool4x4.type.h",
    "../src/submodules/types/float2x2.type.h",
    "../src/submodules/types/float3x3.type.h",
    "../src/submodules/types/float4x4.type.h",

    "../src/submodules/operators/int2.operators.h",
    "../src/submodules/operators/int3.operators.h",
    "../src/submodules/operators/int4.operators.h",
    "../src/submodules/operators/uint2.operators.h",
    "../src/submodules/operators/uint3.operators.h",
    "../src/submodules/operators/uint4.operators.h",
    "../src/submodules/operators/float2.operators.h",
    "../src/submodules/operators/float3.operators.h",
    "../src/submodules/operators/float4.operators.h",
    
    "../src/submodules/operators/int2x2.operators.h",
    "../src/submodules/operators/int3x3.operators.h",
    "../src/submodules/operators/int4x4.operators.h",
    "../src/submodules/operators/uint2x2.operators.h",
    "../src/submodules/operators/uint3x3.operators.h",
    "../src/submodules/operators/uint4x4.operators.h",
    "../src/submodules/operators/float2x2.operators.h",
    "../src/submodules/operators/float3x3.operators.h",
    "../src/submodules/operators/float4x4.operators.h",

    "../src/submodules/functions/bool.func.h",
    "../src/submodules/functions/conversion.h",

    "../src/submodules/functions/int.func.h",
    "../src/submodules/functions/int2.func.h",
    "../src/submodules/functions/int3.func.h",
    "../src/submodules/functions/int4.func.h",
    "../src/submodules/functions/uint.func.h",
    "../src/submodules/functions/uint2.func.h",
    "../src/submodules/functions/uint3.func.h",
    "../src/submodules/functions/uint4.func.h",
    "../src/submodules/functions/float.func.h",
    "../src/submodules/functions/float2.func.h",
    "../src/submodules/functions/float3.func.h",
    "../src/submodules/functions/float4.func.h",

    "../src/submodules/functions/int2x2.func.h",
    "../src/submodules/functions/int3x3.func.h",
    "../src/submodules/functions/int4x4.func.h",     
    "../src/submodules/functions/uint2x2.func.h",
    "../src/submodules/functions/uint3x3.func.h",
    "../src/submodules/functions/uint4x4.func.h",     
    "../src/submodules/functions/float2x2.func.h",
    "../src/submodules/functions/float3x3.func.h",
    "../src/submodules/functions/float4x4.func.h",
};

/* Byte order mark of UTF-8 */
const unsigned char utf8BOM[3] = { 0xEF, 0xBB, 0xBF };

/* Byte order mark of UTF-16 little edian */
const unsigned char utf16LEBOM[2] = { 0xFF, 0xFE };

int issymbol(const char* buf)
{
    int c = *buf++;
    if (!(c == '_' || isalpha(c)))
    {
        return 0;
    }
    
    while ((c = *buf++) > 0)
    {
        if (!(c == '_' || isalnum(c)))
        {
            return 0;
        }
    }

    return 1;
}

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
 * change utf16 -> utf8
 * change utf32 -> utf8 (planned only)
 */
static void file_concat(FILE* dstfile, const char* srcfilename)
{
    FILE* srcfile = fopen(srcfilename, "r");
    if (srcfile)
    {
        fseek(srcfile, 0, SEEK_END);
        long srcfilesize = ftell(srcfile);
        fseek(srcfile, 0, SEEK_SET);
        if (srcfilesize <= 0)
        {
            return;
        }

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

int getexedir(char* buffer, int length)
{
    char exepath[1024];
    
#if __UNIX__
    char slash = '/';
    readlink("/proc/self/exe", exepath, sizeof(exepath));
#else
    char slash = '\\';
    GetModuleFileNameA(NULL, exepath, sizeof(exepath));
#endif

    char* lastslash = strrchr(exepath, slash);
    int cpylen = lastslash - exepath;
    if (cpylen > length)
    {
        return -1;
    }
    else
    {
        strncpy(buffer, exepath, cpylen);
        buffer[cpylen] = 0;
        return cpylen;
    }
}

int main(int argc, char* argv[])
{
    const char* namespace = NULL;
    const char* assertname = NULL;
    const char* outputfile = NULL;
    
    for (int i = 1; i < argc; i++)
    {
        const char* option = argv[i];
        if (strcmp(option, "--help") == 0)
        {
            printf(
                "HLSL Math build tools\n"
                "Usage: %s [Options]\n\n"
                "--help               Print this message.\n"
                "--version            Print version of the tools (same with hlslmath)\n"
                "--output=<file>      Output file path. Default: <hlslmath>/../hlslmath.h\n"
                "--assert=<name>      Assertion expression name. Default: NULL\n" 
                "--namespace=<name>   Namespace of hlslmath. Default: NULL\n",
                argv[0]);
            return 0;
        }
        else if (strcmp(option, "--version") == 0)
        {
            printf("HLSL's Math %s\n", HLSL_MATH_VERSION); 
            return 0;
        }
        else if (strncmp(option, "--namespace=", 12) == 0)
        {
            if (namespace == NULL)
            {
                namespace = option + 12;
                if (!issymbol(namespace))
                {
                    fprintf(stderr, "Namespace is not valid: '%s'\n", namespace);
                    return -1;
                }
            }
            else
            {
                fprintf(stderr, "Too many namespace is presented\n");
                return -1;
            }
        }
        else if (strncmp(option, "--output=", 9) == 0)
        {
            if (outputfile == NULL)
            {
                outputfile = option + 9;
            }
            else
            {
                fprintf(stderr, "Too many output is presented\n");
                return -1;
            }
        }
        else if (strncmp(option, "--assert=", 9) == 0)
        {
            if (assertname == NULL)
            {
                assertname = option + 9;
                if (!issymbol(assertname))
                {
                    fprintf(stderr, "Assert is not valid: '%s'\n", assertname);
                    return -1;
                }
            }
            else
            {
                fprintf(stderr, "Too many assert is presented\n");
                return -1;
            }
        }
        else
        {
            fprintf(stderr, "Unknown options '%s'. Try: `%s --help` for more detail.\n", option, argv[0]);
            return -1;
        }
    }

    char exedir[1024];
    getexedir(exedir, sizeof(exedir));
    if (outputfile == NULL)
    {
        static char defoutput[1024];
        outputfile = defoutput;
        sprintf(defoutput, "%s/../hlslmath.h", exedir);
    }
    
    /* Open or create output file
     */
    FILE* targetFile = fopen(outputfile, "w+");
    if (!targetFile)
    {
        fprintf(stderr, "Cannot create or write file '%s'", outputfile);
        return -1;
    }

    /* Change the current working directory */    
#if __UNIX__
    chdir(exedir);
#else
    SetCurrentDirectoryA(exedir);
#endif
    
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
        
        fprintf(targetFile, "// You can put your copyright here!\n");
        fprintf(targetFile, "// Generate with hlslmath/tools/%s\n", argv[0]);
        fprintf(targetFile, "// Filename: %s\n", outputfile);
        fprintf(targetFile, "// Datetime: %s\n\n", timestr);
    } while (0);

    /* Include module_begin.h before other modules */
    do
    {
        char deffile_path[512];
        sprintf(deffile_path, "%s/../src/module_begin.h", exedir);
        file_concat(targetFile, deffile_path);

        fprintf(targetFile, 
            "\n"
            "//\n"
            "// Custom build settings\n"
            "//\n"
            "\n"
        );

        /* HLSL_DEFINE_INTRINSICS */
        if (namespace)
        {
            const char content[] =
                "#define HLSL_DEFINE_INTRINSICS 1\n\n";
            fwrite(content, sizeof(content) - 1, 1, targetFile);
        }
        else
        {
            const char content[] =
                "#if (defined(_MSC_VER) && _MSC_VER >= 1900) || __unix__\n"
                "#define HLSL_DEFINE_INTRINSICS 1\n"
                "#else\n"
                "#define HLSL_DEFINE_INTRINSICS 0\n"
                "#endif\n\n";
            fwrite(content, sizeof(content) - 1, 1, targetFile);
        }

        /* HLSL_ASSERT */
        if (assertname)
        {
            fprintf(targetFile, "#define HLSL_ASSERT(exp, msg) %s((exp), msg)\n\n", assertname);
        }
        else
        {
            const char content[] = 
                "#include <assert.h>\n"
                "#define HLSL_ASSERT(exp, msg) assert((exp) && msg)\n";
            fwrite(content, sizeof(content) - 1, 1, targetFile);
        }
    } while (0);

    fprintf(targetFile, 
        "\n"
        "//\n"
        "// Define types\n"
        "//\n"
        "\n"
    );

    /* Begin of namespace */
    if (namespace && strlen(namespace) > 0)
    {
        fprintf(targetFile, "namespace %s\n{\n", namespace);
    }
    
    /* Concatenate all files to targetFile */
    for (int i = 0; i < sizeof(filenames) / sizeof(filenames[0]); i++)
    {
        char srcfile_path[512];
        sprintf(srcfile_path, "%s/%s", exedir, filenames[i]);
        file_concat(targetFile, srcfile_path);
    }

    /* End of namespace */
    if (namespace && strlen(namespace) > 0)
    {
        fprintf(targetFile, "\n}\n");
    }

    /* Append module_end.h */
    char deffile_path[512];
    sprintf(deffile_path, "%s/../src/module_end.h", exedir);
    file_concat(targetFile, deffile_path);

    /* End of file */
    fprintf(targetFile, "// File '%s' end here.\n", outputfile); 

    /* Job done, close before quit */
    fclose(targetFile);
    return 0;
}
