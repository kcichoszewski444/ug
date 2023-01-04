// Napisz program ktory pobierze od uzytkownika trzy liczby (dzien, miesiac, rok) i sprawdzi czy tworza poprawna date

#include <stdio.h>

int main() {

    int d, m, r;
    printf("Podaj dzien: ");
    scanf("%i", &d);
    printf("Podaj miesiac: ");
    scanf("%i", &m);
    printf("Podaj rok: ");
    scanf("%i", &r);

    if ((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 0 && d <= 31)
    {
        printf("Data %i.%i.%i jest prawidlowa", d, m, r);
    }
    else if ((m == 4 || m == 6 || m == 9 || m == 11) && d > 0 && d <= 30)
    {
        printf("Data %i.%i.%i jest prawidlowa", d, m, r);
    }
    else if (m == 2)
    {
        if ((r % 4 == 0) && d > 0 && d <= 29)
        {
            printf("Data %i.%i.%i jest prawidlowa", d, m, r);
        }
        else if ((r % 4 != 0) && d > 0 && d <= 28)
        {
            printf("Data %i.%i.%i jest prawidlowa", d, m, r);
        } 
        else
        {
            printf("Data %i.%i.%i nie istnieje", d, m, r);
        }
    }
    else 
    {
        printf("Data: %i.%i.%i nie istnieje", d, m, r);
    }

    return 0;
}