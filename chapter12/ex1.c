#include <stdio.h>

int main(void)
{
    int a[] = {5,15,34,54,14,2,52,72};
    int *p = &a[1], *q = &a[5];

    printf("*(p+3):%d expect 14\n", *(p+3));
    printf("*(q-3):%d expect 34\n", *(q-3));
    printf("q - p:%ld expect 4\n", q - p);
    printf("q < p:%d expect 0\n", q < p);
    printf("*p < *q:%d expect 0\n", *p < *q);
    return 0;
}

