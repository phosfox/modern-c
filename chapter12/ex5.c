#include <stdio.h>

int main(int argc, char const *argv[])
{
    int a[] = {1,2,3,4};
    int *p = a;

    //p == a[0]; wrong! comparison between pointer and int
    printf("p == &a[0]:%d\n", p == &a[0]);
    printf("*p == a[0]:%d\n", *p == a[0]);
    printf("p[0] == a[0]:%d\n", p[0] == a[0]);
    return 0;
}

