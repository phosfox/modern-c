#include <stdio.h>

int sum_array(const int a[], int n)
{
    int sum = 0;
    const int *p = a;
    for (; p < a + n; p++)
    {
        sum += *p;
    }
    return sum;
}
int main(void)
{
    int a[] = {1,2,3,4,5};
    printf("%d\n", sum_array(a, 4));
    return 0;
}
