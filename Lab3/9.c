/* Napisz program ktory pobierze od uzytkownika dwie pary liczb reprezentujace przeciwlegle 
wierzcholki prostokata i na ich podstawie wyznaczy pole i obwod tego prostokata */

#include <stdio.h>

int main() {

    int signed ax, ay, bx, by, sz, dl, p, obw;
    printf("Podaj pierwsza pare liczb:\n");
    printf("Ax = ");
    scanf("%i", &ax);
    printf("Ay = ");
    scanf("%i", &ay);

    printf("Podaj druga pare liczb:\n");
    printf("Bx = ");
    scanf("%i", &bx);
    printf("By = ");
    scanf("%i", &by);

    if (bx > ax && by > ay)
    {
        sz = bx - ax;
        dl = by - ay;
    }
    else if (ax > bx && ay > by)
    {
        sz = ax - bx;
        dl = ay - by;
    }
    else if (ax > bx && by > ay)
    {
        sz = ax - bx;
        dl = by - ay;
    }
    else if (bx > ax && ay > by)
    {
        sz = bx - ax;
        dl = ay - by;
    }
    
    p = sz * dl;
    obw = (2 * sz) + (2 * dl);

    printf("Pole prostokata wynosi %i, a obwod %i", p, obw);

    return 0;
}