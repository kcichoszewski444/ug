// Napisz program ktory pobierze od uzytkownika rok i sprawdzi czy jest on przestepny

#include <stdio.h>

int main() {

    int a;
    printf("Podaj rok, aby sprawdzic czy jest on przestepny: ");
    scanf("%i", &a);

    if (a % 4 == 0)
    {
        printf("Podany rok jest przestepny");
    }
    else
    {
        printf("Podany rok nie jest przestepny");
    }

    return 0;
}