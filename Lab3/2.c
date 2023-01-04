/* Napisz program ktory pobierze od uzytkownika dwie liczby i zwroci wynik ich:
- dodawania
- odejmowania
- mnozenia
- dzielenia
- reszte z dzielenia */

#include <stdio.h>

int main() {

    int a, b;
    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &a);
    printf("Podaj druga liczbe: ");
    scanf("%i", &b);

    printf("Wynik dodawania = %i\n", a+b);
    printf("Wynik odjemowania = %i\n", a-b);
    printf("Wynik mnozenia = %i\n", a*b);
    printf("Wynik dzielenia = %i\n", a/b);
    printf("Wynik reszty z dzielenia = %i\n", a%b);
    
    return 0;
}