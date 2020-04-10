#include <stdio.h>

double inner_product(const double *a, const double *b, int n){
    const double *pa = a;
    const double *pb = b;
    double prod = 0;
    for (; pa < a + n && pb < a + n; pa++, pb++)
    {
            prod += *pa * *pb;
    }
    return prod;
}

int main(void)
{
    double a[] = {1,2,3,4,5,6};
    printf("%f\n", inner_product(a, a, 6));
    return 0;
}

