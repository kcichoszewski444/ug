// Napisz program ktory pobierze od uzytkownika znak ASCII (char) lub kod ASCII (int) i sprawdzi czy jest on litera alfabetu

#include <stdio.h>

int main() {

    char a;
    printf("Podaj znak lub liczbe: ");
    scanf("%c", &a);

    if ((a >='a' && a <='z') || a >='A' && a <='Z')
    {
        printf("\"%c\" jest litera alfabetu", a);
    }
    else 
    {
        printf("\"%c\" nie jest litera alfabetu", a);
    }

    return 0;
}