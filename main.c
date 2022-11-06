#include <stdio.h>
#include <stdlib.h>

int main()
{
   z11();
}

int z1()
{
    printf("Hello world!\n");
    return 0;
}

int z2()
{
    int a, b;
    printf("Podaj pierwszą liczbę: ");
    scanf("%i", &a);
    printf("Podaj drugą liczbę: ");
    scanf("%i", &b);

    printf("\nDodawanie: %i", a+b);
    printf("\nOdejmowanie: %i", a-b);
    printf("\nMnożenie: %i", a*b);
    printf("\nDzielenie: %i", a/b);
    printf("\nReszta z dzielenia: %i", a%b);
}

int z3()
{
    int a, b;
    printf("Podaj liczbę a: ");
    scanf("%i", &a);
    printf("Podaj liczbę b: ");
    scanf("%i", &b);

    if(a>b)
    {
        printf("\nLiczba a jest większa");
    }
    else
    {
        printf("\nLiczba b jest większa");
    }
}
int z4()
{
    int a, b, c;
    printf("Podaj 3 różne liczby\n\n");
    printf("Podaj liczbę a: ");
    scanf("%i", &a);
    printf("Podaj liczbę b: ");
    scanf("%i", &b);
    printf("Podaj liczbę c: ");
    scanf("%i", &c);

    if(a==b && b==c && c==a)
    {
        printf("\nLiczby są równe!!");
    }
    else if(a>b && a>c)
    {
        printf("\nLiczba a jest największa");
    }
    else if(b>a && b>c)
    {
        printf("\nLiczba b jest największa");
    }
    else
    {
        printf("\nLiczba c jest największa");
    }
}
int z5()
{
    char a;
    printf("Podaj jakiś znak: ");
    scanf("%c", &a);
    if ((a>='a' && a<='z') || (a>='A' && a<='Z'))
    {
        printf("\nWpisany znak jest literą alfabetu");
    }
    else
    {
        printf("\nWpisany znak nie jest literą alfabetu");
    }
}

int z6()
{
    int rok;
    printf("Podaj jakiś rok: ");
    scanf("%i", &rok);

    if (rok%4==0)
    {
        printf("\nPodany rok jest przestępny");
    }
    else
    {
        printf("\nPodany rok nie jest przestępny");
    }
}

int z7()
{
    int d, m, r;
    printf("Podaj dzień: ");
    scanf("%i", &d);
    printf("Podaj miesiąc: ");
    scanf("%i", &m);
    printf("Podaj rok: ");
    scanf("%i", &r);

    if((d>=0 && d<=31) && (m>=0 && m<=12) && (r>=0000 && r<=9999))
    {
        if(((m==4) || (m==6) || (m==9) || (m==11)) && (d<=30))
        {
            printf("Podana data jest prawidłowa");
        }
        else if((m==2) && (d<=28))
        {
            printf("Podana data jest prawidłowa");
        }
        else if(((m==1) || (m==3) || (m==5) || (m==7) || (m==8) || (m==10) || (m==12)) && (d<=31))
        {
            printf("Podana data jest prawidłowa");
        }
        else
        {
            printf("Podana data jest nieprawidłowa");
        }
    }
}

int z8()
{
    //Zadanie z gwiazką
}

int z9()
{
    int a1, a2, b1, b2;
    printf("Podaj pierwszą liczbę z pierwszej pary: ");
    scanf("%i", &a1);
    printf("Podaj drugą liczbę z pierwszej pary: ");
    scanf("%i", &a2);

    printf("Podaj pierwszą liczbę z drugiej pary: ");
    scanf("%i", &b1);
    printf("Podaj drugą liczbę z drugiej pary: ");
    scanf("%i", &b2);


}

int z10()
{
    int a, b, c;
    printf("Podaj odcinek nr1: ");
    scanf("%i", &a);
    printf("Podaj odcinek nr2: ");
    scanf("%i", &b);
    printf("Podaj odcinek nr3: ");
    scanf("%i", &c);

    if(a>b && a>c)
    {
        if((b+c)<a)
        {
            printf("Z odcinków można utworzyć trójkąt");
        }
        else
        {
            printf("Z odcinków nie można utworzyć trójkąta");
        }
    }

    else if(b>c && b>a)
    {
        if((a+c)<b)
        {
            printf("Z odcinków można utworzyć trójkąt");
        }
        else
        {
            printf("Z odcinków nie można utworzyć trójkąta");
        }
    }

    else if(c>b && c>a)
    {
        if((a+b)<c)
        {
            printf("Z odcinków można utworzyć trójkąt");
        }
        else
        {
            printf("Z odcinków nie można utworzyć trójkąta");
        }
    }
    else
    {
        printf("Z odcinków nie można utworzyć trójkąta");
    }
}

int z11()
{
    int a, b, c;
    int a2 = a*a;
    int b2 = b*b;
    int c2 = c*c;

    printf("Podaj odcinek nr1: ");
    scanf("%i", &a);
    printf("Podaj odcinek nr2: ");
    scanf("%i", &b);
    printf("Podaj odcinek nr3: ");
    scanf("%i", &c);

    if((c>a) && (c>b))
    {
        if(c2=a2+b2)
        {
            printf("Trójkąt jest prostokątny");
        }
        else
        {
            printf("Trójkąt nie jest prostokątny");
        }
    }
    else if((b>a) && (b>c))
    {
        if(b2=a2+c2)
        {
            printf("Trójkąt jest prostokątny");
        }
        else
        {
            printf("Trójkąt nie jest prostokątny");
        }
    }
    else if((a>b) && (a>c))
    {
        if(a2=b2+c2)
        {
            printf("Trójkąt jest prostokątny");
        }
        else
        {
            printf("Trójkąt nie jest prostokątny");
        }
    }
    else
    {
        printf("Trójkąt nie jest prostokątny");
    }
}
