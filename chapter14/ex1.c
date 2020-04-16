#include <stdio.h>

#define CUBE(x) ((x)*(x)*(x))

#define REM(x, y) ((x) % (y))

#define WEIRD(x, y) (((x) * (y)) < 100 ? 1 : 0)

int main(int argc, char const *argv[])
{
    printf("%d\n", CUBE(2+1));
    printf("%d\n", REM(11, 4));
    printf("%d\n", WEIRD(10, 1));
    return 0;
}

