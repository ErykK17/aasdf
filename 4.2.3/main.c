#include <stdio.h>
#include <stdlib.h>
int srednia (unsignedint n, int tab [])
{
    int x=0;
    int wynik=0;
    for (int i=0; i<n; i++)
    {
        x+=tab[i];
        wynik=x/n;

    }
    return wynik;
}
int main()
{
    int tablica[5]={4,4,4,4,4};
    printf("%d",srednia(5,tablica));
    return 0;
}
