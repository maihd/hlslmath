#include <stdio.h>
#include <wchar.h>
#include <string.h>

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
    
    size_t newlen = len;
    for (int i = 0, n = size > len ? len : size; i < n; i++)
    {
        int c = buf[i];
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
                    buf[i] = buf[i + byte_count + 1];  
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

int main(int argc, char* argv[])
{
    const char* filenames[] = {
        "../src/hlsldef.h",
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

    FILE* targetFile = fopen("../hlslmath.h", "w+");

    // Mark targetFile as utf8 format
    unsigned char utf8BOM[3] = { 0xEF, 0xBB, 0xBF };
    fwrite(utf8BOM, 1, sizeof(utf8BOM), targetFile);
    
    for (int i = 0; i < sizeof(filenames) / sizeof(filenames[0]); i++)
    {
        FILE* file = fopen(filenames[i], "r");
        if (file)
        {
            unsigned char bom[2];
            fread(bom, sizeof(bom), 1, file);
            if (bom[0] == 0xFF && bom[1] == 0xFE)
            {
                // UTF16 little edian
                
                char    mbstr[2048];
                wchar_t wcstr[1024];
                while (!feof(file))
                {
                    size_t readbytes = fread(wcstr, sizeof(wchar_t), sizeof(wcstr), file);
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

                    fwrite(mbstr, 1, mblen, targetFile);
                }
            }
            else 
            {
                // UTF8 or ASCII
                
                unsigned char lastBOM;
                fread(&lastBOM, sizeof(lastBOM), 1, file);
                if (bom[0] != utf8BOM[0] || bom[1] != utf8BOM[1] || lastBOM != utf8BOM[2])
                {
                    fwrite(bom, sizeof(bom), 1, targetFile);
                    fwrite(&lastBOM, sizeof(lastBOM), 1, targetFile);
                }
                
                char buffer[1024];
                while (!feof(file))
                {
                    size_t readbytes = fread(buffer, 1, sizeof(buffer), file);
                    readbytes = utf8_normalize(buffer, sizeof(buffer), readbytes);
                    if (buffer[readbytes - 1] == 0)
                    {
                        readbytes--;
                    }
                    
                    fwrite(buffer, 1, readbytes, targetFile);
                }
            }
            fclose(file);
        }
    }
    fclose(targetFile);
    
    return 0;
}
