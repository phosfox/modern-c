#include <stdio.h>
#include <math.h>

void long_div(int num[], int len, int divisor, int res[])
{
    int idx = 0;
    int temp = num[idx];
    while (temp < divisor)
    {
        temp = temp * 10 + (num[++idx]);
    int i = 0;
    while (len > idx)
    {
        res[i] = temp / divisor;
        temp = (temp % divisor) * 10 + num[++idx];
        ++i;
    }
}

int main(void)
{

    int num[] = {1,2,5};
    int divisor = 25;
    int res[3];
    long_div(num, 3, divisor, res);
    for (size_t i = 0; i < 3; i++)
    {
        printf("%d ", res[i]);
    }

    return 0;
}
