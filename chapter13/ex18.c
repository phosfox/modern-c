#include <stdio.h>
#include <string.h>

void remove_filename(char *s)
{
    while (*s++)
        ; //get length of s
    while (*--s != '/')
        ;
    *s = '\0';
}

int main(int argc, char const *argv[])
{
    char url[] = "http://www.knking.com/index.html";
    printf("Whole URL: %s\n", url);
    remove_filename(url);
    printf("URL without file name: %s", url);
    return 0;
}
