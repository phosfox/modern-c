#include <stdio.h>

#define NELEMS(a) (sizeof(a) / sizeof((*a)))

int main(int argc, char const *argv[])
{
    int a[9] = {0};
    printf("%ld\n", NELEMS(a));
    return 0;
}

