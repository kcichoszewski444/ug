#include <stdio.h>

int a = 5;

int liczby (int a, int b){
    printf("\n%p, %p", &a, &b);
}

int main()
{
    int b;
    b = a;
    printf("%p\n", &b);
    printf("%i", b);
    liczby(a, b);
    return 0;
}