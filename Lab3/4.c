// Napisz program ktory pobierze od uzytkownika trzy liczby i zwroci najwiekszą liczbe

#include <stdio.h>

int main() {
       
    int a, b, c;
    printf("Podaj pierwsza liczbe: ");
    scanf("%i", &a);
    printf("Podaj druga liczbe: ");
    scanf("%i", &b);
    printf("Podaj trzecia liczbe: ");
    scanf("%i", &c);

    if (a>b && a>c)
    {
        printf("Pierwsza liczba jest najwieksza i wynosi: %i", a);
    }
    else if (b>a && b>c){
        printf("Druga liczba jest najwieksza i wynosi: %i", b);
    }
    else if (c>a && c>b){
        printf("Trzecia liczba jest najwieksza i wynosi: %i", c);
    }

    return 0;
}