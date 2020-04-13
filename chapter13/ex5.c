#include <stdio.h>
#include <ctype.h>

void capitalize_a(char str[])
{
    int i;
    for (i = 0; str[i]; i++)
    {
        str[i] = toupper(str[i]);
    }
}

void capitalize_b(char str[])
{
    char *p = str;
    for (; *p; p++)
    {
        *p = toupper(*p);
    }
}

int main()
{
    char str[] = "asd99FE\n";
    capitalize_b(str);
    printf("%s", str);
    return 0;
}
