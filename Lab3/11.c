// Napisz program ktory pobierze od uzytkownika dlugosci trzech odcinkow i sprawdzi czy mozna z nich utworzyc trojkat prostokatny

#include <stdio.h>

int main()
{
    int a, b, c;
    printf("Podaj dlugosc pierwszego odcinka: ");
    scanf("%i", &a);
    printf("Podaj dlugosc drugiego odcinka: ");
    scanf("%i", &b);
    printf("Podaj dlugosc trzeciego odcinka: ");
    scanf("%i", &c);

    if (a >= b && a >= c)
    {
        if (b * b + c * c == a * a)
        {
            printf("Z bokow %i,%i,%i mozna utworzyc trojkat prostokatny", a, b, c);
            return 0;
        }
    }
    else if (b >= a && b >= c)
    {
        if (a * a + c * c == b * b)
        {
            printf("Z bokow %i,%i,%i mozna utworzyc trojkat prostokatny", a, b, c);
            return 0;
        }
    }
    else if (c >= a && c >= b)
    {
        if (b * b + a * a == c * c)
        {
            printf("Z bokow %i,%i,%i mozna utworzyc trojkat prostokatny", a, b, c);
            return 0;
        }
    }

    printf("Z bokow %i,%i,%i nie mozna utworzyc trojkata prostokatnego", a, b, c);
    
    return 0;
}