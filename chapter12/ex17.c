#include <stdio.h>
#define LEN 5
int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int i, j, sum = 0;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < LEN; j++)
        {
            sum += a[i][j];
        }
    }
    return sum;
}

int sum_two_dim_array(const int *a, int n) {
    int sum = 0;
    const int *pa = a;
    for(; pa < a + n; pa++) {
        sum += *pa;
    }
    return sum;
}

int main(void)
{
    const int a[][LEN] = {{1, 2, 3, 4, 5}, {1, 2, 3, 4, 5}};
    int sumA = sum_two_dimensional_array(a, 2);
    int sumA2 = sum_two_dim_array(a[0], LEN * 2);
    int sumA3 = sum_two_dim_array(*a, LEN * 2);
    printf("sumA:%d\n", sumA);
    printf("sumA2:%d\n", sumA2);
    printf("sumA3:%d\n", sumA3);
    return 0;
}
