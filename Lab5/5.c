#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int a1, b1, a2, b2;
    printf("Podaj wymiary pierwszego odcinka: \n");
    printf("a1 = ");
    scanf("%i", &a1);
    printf("b1 = ");
    scanf("%i", &b1);
    printf("Podaj wymiary drugiego odcinka: \n");
    printf("a2 = ");
    scanf("%i", &a2);
    printf("b2 = ");
    scanf("%i", &b2);
    int a3, b3;

    if(a1<a2 && b1<b2){
        a3 = a2;
        b3 = b1;
        printf("\na3 = %i", a3);
    }
    else if(a2<a1 && b1<b2){
        a3 = a1;
        b3 = b1;
        printf("\na3 = %i", a3);
    }
    else if(a1<b1 && a2<b2){
        printf("\n-1");

    }
}
