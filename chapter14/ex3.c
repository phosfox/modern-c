#include <stdio.h>

#define DOUBLE(x) (2*(x))

int main(int argc, char const *argv[])
{
    printf("%d\n",DOUBLE(1+2));
    printf("%d\n",4/DOUBLE(2));
    return 0;
}

