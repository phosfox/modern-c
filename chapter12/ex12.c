#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    const int *pa = a;
    for (; pa < a + n; pa++)
    {
        if (*pa > *largest)
        {
            *second_largest = *largest;
            *largest = *pa;
        }
        else if (*pa > *second_largest)
        {
            *second_largest = *pa;
        }
    }
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int largest = 0;
    int second = 0;
    find_two_largest(a, 5, &largest, &second);
    printf("largest:%d second:%d", largest, second);
    return 0;
}
