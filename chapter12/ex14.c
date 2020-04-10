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

int main()
{
    int a[2][4] = {{12,13,14,15}, {20,32,40,50}};
    int key = 32;
    bool found = false;
    for (int i = 0; i < 2; i++) {
        found = search(a[i], 4, key);
        if (found) break;
    }
    printf("found:%d\n", found);
    return 0;
}
   
