#include <stdio.h>
#include <stdlib.h>

int fibb(int n)
{
   if(n==0)
   {
       return 0;
   }
   else if(n==1)
   {
       return 1;
   }
   else if(n>1)
   {
       return fibb(n-1)+fibb(n-2);
   }
}

int main()
{
    int n;
    printf("Podaj liczbe n: ");
    scanf("%i",&n);
    printf("%i",fibb(n));
    return 0;
}