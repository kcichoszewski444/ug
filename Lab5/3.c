#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void znak(char s[], int i)
{
    printf("I-ty znak napisu to: %c\n",s[i]);
}

int main()
{
    int i;
    char s[100];
    printf("Podaj napis: ");
    scanf("%s",s);
    printf("Podaj liczbe i: ");
    scanf("%i",&i);

    znak(s,i);
}
