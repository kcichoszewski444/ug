#include <stdio.h>

struct Punkt 
{
    float x, y;
};

struct Prosta 
{
    float a, b;
};

struct Prosta znajdzProsta(struct Punkt p1, struct Punkt p2) 
{
    struct Prosta pr;

    pr.a = (p2.y - p1.y) / (p2.x - p1.x);
    pr.b = p1.y - (pr.a * p1.x);

    return pr;
}

int main()
{
    struct Punkt p1 = {3, 7};
    struct Punkt p2 = {5, 14};
    struct Prosta l = znajdzProsta(p1, p2);

    printf("y = %.1fx + %.1f\n", l.a, l.b);
    
    return 0;
}