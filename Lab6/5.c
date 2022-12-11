#include <stdio.h>
#include <stdlib.h>

int bin(int n)
{
   if(n>0)
   {
       bin(n/2);
       printf("%i",n%2);
   }
}

int main()
{
    int n;
    printf("Podaj liczbę: ");
    scanf("%i",&n);
    bin(n);
    return 0;
}
