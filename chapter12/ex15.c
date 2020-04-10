#include <stdio.h>

void print_temp(const int temps[], int n) {
    const int *ptemps = temps;
    while(ptemps < temps + n) {
        printf("%dC ", *ptemps++);
    }
}

int main()
{
    int a[2][4] = {{12,13,14,15}, {20,32,40,50}};
    int i = 1;
    print_temp(a[i], 4);
    return 0;
}
   
