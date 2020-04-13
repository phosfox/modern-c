#include <string.h>
#include <stdio.h>

void get_extension(const char *file_name, char *extension)
{
    int i = 0;
    for (; file_name[i]; i++)
    {
        if (file_name[i] == '.'){
            strcpy(extension, &file_name[++i]);
            return;
        }
    }
    strcpy(extension, "");

}

int main(int argc, char const *argv[])
{
    char *filename = "memo.txt";
    char ext[64];
    get_extension(filename, ext);
    puts(ext);
    return 0;
}
