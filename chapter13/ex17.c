#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>

bool test_extension(const char *file_name, const char *extension)
{
    int fn_counter = 0;
    bool found_ext = false;
    for (; file_name[fn_counter]; fn_counter++)
    {
        if (file_name[fn_counter] == '.')
        {
            fn_counter++;
            found_ext = true;
            break;
        }
    }
    int ext_counter = 0;
    for (; file_name[fn_counter] && extension[ext_counter]; fn_counter++, ext_counter++)
    {
        if (toupper(file_name[fn_counter]) != toupper(extension[ext_counter]))
        {
            return false;
        }
    }
    return true && found_ext;
}

int main(int argc, char const *argv[])
{
    int a = test_extension("meme.txt", "TXT");
    printf("%d\n", a);
    int b = test_extension("txt", "TXT");
    printf("%d\n", b);
    return 0;
}
