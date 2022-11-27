#include <stdio.h>
#include <stdlib.h>

void dodaj(int i, int j){
    printf("Dodawanie wynosi: %d", i+j);
}

void odejmij(int i, int j){
    printf("Odejmowanie wynosi: %d", i-j);
}

void mnozenie(int i, int j){
    printf("Mnozenie wynosi: %d", i*j);
}

void dzielenie(int i, int j){
    printf("Dzielenie wynosi: %d", i/j);
}

int main()
{
    printf("Podaj dwie liczby\n");
    int i, j;
    scanf("%d %d",&i,&j);
    printf("Dodawawanie - 1\n");
    printf("Odejmowanie - 2\n");
    printf("Mnozenie - 3\n");
    printf("Dzielenie - 4\n");
    int k;
    scanf("%d", &k);
    switch(k){
        case 1:{
            dodaj(i,j);
            break;
        }
        case 2:{
            odejmij(i,j);
            break;
        }
        case 3:{
            mnozenie(i,j);
            break;
        }
        case 4:{
            dzielenie(i,j);
            break;
        }
    }
}
