#include <stdio.h>

int find_largest(const int a[], int n)
{
    const int *pa = a;
    int largest = a[0];
    while (pa < a + n)
    {
        if (*pa > largest)
        {
            largest = *pa;
        }
        pa++;
    }
    return largest;
}

void print_largest_temp(const int temps[], int n)
{
    int largest = 0;
    largest = find_largest(temps, n);
    printf("%dC ", largest);
}

int main()
{
    int a[2][4] = {{12, 13, 14, 15}, {20, 32, 40, 50}};
    for (size_t i = 0; i < 2; i++)
    {
        print_largest_temp(a[i], 4);
    }
    return 0;
}
