/* Napisz program ktory pobierze od uzytkownika liczbe i sprawdzi czy jest ona podzielna przez liczby
z zakresu 2-6 jesli tak program powinien zwrocic pierwsza z tych liczb, jesli podana liczba nie dzieli 
sie przez zadna z tych liczb program powinien zwrocic stosowny komunikat */

#include <stdio.h>

int main() {

    int a;
    printf("Podaj liczbe: ");
    scanf("%i", &a);

    if (a % 2 == 0)
    {
        printf("Liczba %i jest podzielna przez 2", a);
        return 0;
    }
    else if (a % 3 == 0)
    {
        printf("Liczba %i jest podzielna przez 3", a);
        return 0;
    }
    else if (a % 4 == 0)
    {
        printf("Liczba %i jest podzielna przez 4", a);
        return 0;
    }
    else if (a % 5 == 0)
    {
        printf("Liczba %i jest podzielna przez 5", a);
        return 0;
    }
    else if (a % 6 == 0)
    {
        printf("Liczba %i jest podzielna przez 6", a);
        return 0;
    }
    
    printf("Liczba %i nie jest podzielna przez liczby z zakresu 2-6", a);

    return 0;
}