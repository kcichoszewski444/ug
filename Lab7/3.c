#include <stdio.h>

void zamiana(int *a, int *b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main()
{
    int a = 2;
    int b = 4;

    printf("Przed zamiana: %i, %i", a, b);

    zamiana(&a, &b);

    printf("\nPo zamianie: %i, %i", a, b);

    return 0;
}