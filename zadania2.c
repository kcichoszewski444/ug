#include <stdio.h>
#include <stdlib.h>

int main()
{
   z6();
}

int z1()
{
    int n, sum;
    printf("Podaj liczbę: ");
    scanf("%i", &n);

    for (int i = 1; i <= n; i++)
    {
        int kw = 0;
        kw = i*i;
        sum += kw;
    }
    printf("%i",sum);
}

int z2()
{
    int a,b;
    printf("Podaj a: ");
    scanf("%i", &a);
    printf("Podaj b: ");
    scanf("%i", &b);

    int pow = a;
    for (int i = 2; i <= b; i++)
    {
        pow = pow*a;
    }
    printf("%i", pow);
}

int z3()
{
    int a,b,c;
    printf("Podaj a: ");
    scanf("%i", &a);
    printf("Podaj b: ");
    scanf("%i", &b);

    int pow = a;


    for (int i = 2; i <= c; i++)
    {
        pow = pow*a;

        while (pow < b)
        {
            c++;
            break;
        }

    }
    printf("%i", c);
}

int z4()
{
    int tab[] = {1,2,3,4,5};

    for (int i = 0; i!=5; i++)
    {
        tab[i] *= tab[i];
        printf("\n%i", tab[i]);
    }
}
//Niedokonczone ^
int z5()
{
    int n;
    int tab[n];
    printf("Podaj rozmiar tablicy: ");
    scanf("%i", &n);

    for (int i = 0; i<n; i++)
    {
        printf("Podaj liczbę: ");
        scanf("%i", &tab[i]);
    }

    for (int i = 0; i!=n; i++)
    {
        printf("%i", tab[i]);
    }
}

int z6()
{
    int tab[2][4];

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            tab[i][j] = {{0,1},{0,1},{1,0},{0,1}};
        }
    }
}
