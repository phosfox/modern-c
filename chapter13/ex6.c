#include <stdio.h>
#include <stdbool.h>
#include <string.h>

void censor(char *str)
{
    char *p = str;
    for (; *p; p++)
    {
        if (*p == 'f' && *(p + 1) == 'o' && *(p + 2) == 'o')
        {
            *p = *(p + 1) = *(p + 2) = 'x';
        }
    }
}

int main(int argc, char const *argv[])
{
    char str[] = "food fool";
    censor(str);
    printf("%s", str);
    return 0;
}
