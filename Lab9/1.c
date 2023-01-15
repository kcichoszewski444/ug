#include <stdio.h>
#include <string.h>

struct Dane
{
    char imie[15];
    char nazwisko[20];
    char nr_telefonu[10];

};

int main()
{
    struct Dane Osoba1;
    strcpy(Osoba1.imie, "Marek");
    strcpy(Osoba1.nazwisko, "Kowalski");
    strcpy(Osoba1.nr_telefonu, "609609888");

    struct Dane Osoba2;
    strcpy(Osoba2.imie, "Grzegorz");
    strcpy(Osoba2.nazwisko, "Pedziwiatr");
    strcpy(Osoba2.nr_telefonu, "123746294");

    printf("%s, %s, %s\n", Osoba1.imie, Osoba1.nazwisko, Osoba1.nr_telefonu);
    printf("%s, %s, %s\n", Osoba2.imie, Osoba2.nazwisko, Osoba2.nr_telefonu);

    return 0;
}