// Napisz program ktory dla dowolnej wartosci kata w stopniach zwroci wartosc tego kata w radianach

#include <stdio.h>

int main()  
{  
    int stp;
    float rad;  
    
    printf("Wpisz wartosc kata w stopniach: ");  
    scanf("%i", &stp);

    rad = stp * ( 3.14 / 180.0 );  

    printf("Kat %i w radianach wynosi: %.3f", stp, rad);

    return 0;  
}