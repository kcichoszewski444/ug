#include <stdio.h>

int main() {

    int n;
    printf("Podaj liczbę liczb do wpisania do plików: ");
    scanf("%d", &n);

    FILE *nieparzyste = fopen("nieparzyste.txt", "w");
    FILE *parzyste = fopen("parzyste.txt", "w");

    int liczba;
    for (int i = 0; i < n; i++) 
    {
        printf("Podaj liczbę: ");
        scanf("%d", &liczba);

        if (liczba % 2 == 0) 
        {
            fprintf(parzyste, "%d\n", liczba);
        } 
        else 
        {
            fprintf(nieparzyste, "%d\n", liczba);
        }
    }

    fclose(nieparzyste);
    fclose(parzyste);

    return 0;
}




