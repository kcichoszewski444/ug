#include <stdio.h>
#include <limits.h>

int main() {

    FILE *fp = fopen("liczby.txt", "r");
    if (fp == NULL) {
        printf("Nie można otworzyć pliku");
        return 0;
    }

    int max = INT_MIN;
    int min = INT_MAX;
    int a;

    while (fscanf(fp, "%i", &a) == 1) 
    {
        if (a > max) {
            max = a;
        }
        else if (a < min) {
            min = a;
        }
    }

    printf("Najwieksza liczba: %i\n", max);
    printf("Najmniejsza liczba: %i\n", min);

    fclose(fp);

    return 0;
}