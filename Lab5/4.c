#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char wyraz[99];
    int rozmiar,j=0,wynik;
    printf("Podaj wyraz: ");
    scanf("%s",wyraz);
    rozmiar=strlen(wyraz);

    for(int i=rozmiar;i>0;i--){
        if(wyraz[j]==wyraz[i-1])
        {
            wynik=1;
        }
        else
        {
            wynik=0;
        }
        j++;
    }
    if(wynik==1){
        printf("Wyraz jest palindromem");
    }
    else{
        printf("Wyraz nie jest palindromem");
    }
}
