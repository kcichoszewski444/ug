#include <stdio.h>

int main() {

    int a;
    printf("Dla 0 radianow wybierz 1\n");
    printf("Dla 1/6 Pi rad wybierz 2\n");
    printf("Dla 1/4 Pi rad wybierz 3\n");
    printf("Dla 1/3 Pi rad wybierz 4\n");
    printf("Dla 1/2 Pi rad wybierz 5\n");
    printf("Wybierz opcje: ");
    scanf("%d", &a);

    if (a == 1)
    {
        printf("0 radianow to 0 stopni");
    }
    else if (a == 2)
    {
        printf("1/6 Pi radianow to 30 stopni");
    }
    else if (a == 3)
    {
        printf("1/4 Pi radianow to 45 stopni");
    }
    else if (a == 4)
    {
        printf("1/3 Pi radianow to 60 stopni");
    }
    else if (a == 5)
    {
        printf("1/2 Pi radianow to 90 stopni");
    }
    else
    {
        printf("Zly wybor, wybierz liczbe od 1 do 5");
    }

    return 0;
}