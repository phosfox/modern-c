#include <stdio.h>
#include <stdbool.h>

bool search(const int a[], int n, int key){
    const int *p = a;
    while (p < a + n)
    {
        if (key == *p){
            return true;
        }
        p++;
    }
    return false;
}

int main(void)
{
    int a[] = {1,2,3,4,5};
    printf("%d\n", search(a, 5, 3));
    printf("%d\n", search(a, 5, 6));
    return 0;
}

