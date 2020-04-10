#include <stdio.h>

void store_zeros(int a[], int n) {
    int *p = a;
    for (; p < a + n; p++)
    {
        *p = 0;
    }
}

int main(void)
{
    int a [] = {1,2,3,4,5};
    store_zeros(a, 5);
    for (size_t i = 0; i < 5; i++)
    {
        printf("%d ", a[i]);
    }
    return 0;
}

