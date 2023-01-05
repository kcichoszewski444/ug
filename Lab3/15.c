/* Napisz program ktory poprosi uzytkownika o odgadniecie liczby z zakresu 1-5. Liczba powinna byc na stale wpisana do 
programu. Uzytkownik ma trzy szanse na odgadniecie liczby, jesli uzytkownik odgadnie prawidlowa liczbe przed trzecia szansa 
program powinien sie zakonczyc. Podanie liczby z poza zakresu powinno skutkowac dodatkowa informacja o zmarnowanej szansie */

#include <stdio.h>

int main()  
{  
    int n, a;
    n = 3;
    printf("Zgadnij liczbe z zakresu 1-5: ");
    scanf("%i", &a);

    if (a == n)
    {
        printf("Gratulacje, zgadles liczbe");
    }
    else
    {
        printf("Nie zgadles, sproboj jeszcze raz\nPodaj liczbe: ");
        scanf("%d", &a);

        if (a == n)
        {
            printf("Gratulacje, zgadles liczbe");
        }
        else
        {
            printf("Nie zgadles, sproboj jeszcze raz\nPodaj liczbe: ");
            scanf("%d", &a);

            if (a == n)
            {
                printf("Gratulacje, zgadles liczbe");
            }
            else
            {
                printf("Nie zgadles, koniec gry");
            }
        }
    }

    return 0;
}