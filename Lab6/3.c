#include <stdio.h>
#include <stdlib.h>

int liczby(int n)
{
    if(n==1)
    {
        printf("1");
    }
    else if(n>1)
    {
        printf("%i ",n);
        return liczby(n-1);
    }
}

int main()
{
    int n;
 
    printf("Podaj liczbę: ");
    scanf("%i",&n);
    liczby(n);
    return 0;
}
