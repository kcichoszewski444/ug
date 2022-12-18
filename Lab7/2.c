#include <stdio.h>

int main()
{
    int tab[10];
    printf("Podaj elementy tablicy:\n");
    for (int i = 0; i < 10; i++){
        scanf("%i", (tab+i));
    }
    for (int i = 0; i < 10; i++){
        printf("%i,", *(tab+i));
    }
    return 0;
}