#include <stdio.h>

struct Punkt
{
    float x, y;
};


int main()
{
    struct Punkt p1;
    p1.x = 1.0;
    p1.y = 2.0;

    printf("Wspolrzedne punktu p1 = {%.1f , %.1f}", p1.x, p1.y);

    return 0;
}