// Napisz program ktory pobierze od uzytkownika dlugosci trzech odcinkow i sprawdzi czy mozna z nich utworzyc trojkat

#include <stdio.h>

int main() {

    int a, b, c;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%i", &a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%i", &b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%i", &c);

    if ((a + b > c) && (a + c > b) && (b + c > a))
    {
        printf("Z bokow %i,%i,%i mozna utworzyc trojkat", a, b, c);
    }
    else
    {
        printf("Z bokow %i,%i,%i nie mozna utworzyc trojkata", a, b, c);
    }

    return 0;
}