#include <stdio.h>

int sumuj(int liczba, int suma)
{
    if(liczba>0)
    {
        suma = suma + liczba % 10;
        liczba = liczba/10;
        sumuj(liczba,suma);
    }
    else
    {
        return suma;
    }
}

int main()
{
    int liczba, suma = 0;
    printf("Podaj liczbę: ");
    scanf("%i",&liczba);
    printf("Wynik: %i",sumuj(liczba,suma));
    return 0;
}
