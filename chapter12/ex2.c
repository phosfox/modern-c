#include <stdio.h>

int main(void)
{
    int a[] = {3, 4, 20};
    int *low = &a[0];
    int *middle = &a[1];
    int *high = &a[2];
    *middle = (*low + *high) / 2;
    printf("middle:%d\n", *middle);
    return 0;
}

