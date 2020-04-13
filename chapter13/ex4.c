#include <stdio.h>
#include <ctype.h>

int read_line_a(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (isspace(ch))
        {
            continue;
        }
        else if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}

int read_line_b(char str[], int n)
{
    int ch, i = 0;

    while ((ch = getchar()) != '\n')
    {
        if (isspace(ch))
        {
            break;
        }
        else if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';
    return i;
}


int read_line_c(char str[], int n)
{
    int ch, i = 0;

    do {
        ch = getchar();
        if (i < n)
            str[i++] = ch;
    } while (ch != '\n');
    str[i] = '\0';
    return i;
}

int read_line_d(char str[], int n) {
    int ch, i = 0;
    while((ch = getchar()) != '\n' && i < n - 1) {
        str[i++] = ch;
    }
    str[i] = '\0';
    return i;
}

void print_line(const char str[]) {
    const char *p = str;
    while (*p)
    {
        printf("%c", *p++);
    }
    
}

int main()
{
    char s[4];
    int n = 4;
    read_line_d(s, n);
    print_line(s);
    return 0;
}
