#include <stdio.h>
#include <stdlib.h>

int silnia(int n)
{
    if(n<2)
    {
        return 1;
    }
    
    return n*silnia(n-1);
}

int main()
{
    int n;
 
    printf("Podaj liczbę: ");
    scanf("%i",&n);
    printf("n = %i",silnia(n));
    return 0;
}
