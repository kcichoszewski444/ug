// Napisz program ktory pobierze od uzytkownika dwie liczby i zwroci wieksza z nich

#include <stdio.h>

int main() {
   
    int a, b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &a);
    printf("Podaj druga liczbe: ");
    scanf("%i", &b);

    if (a > b)
    {
        printf("Pierwsza liczba jest wieksza i wynosi: %i", a);
    }
    else
    {
        printf("Druga liczba jest wieksza i wynosi: %i", b);
    }

    return 0;
}