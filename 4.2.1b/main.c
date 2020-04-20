#include <stdio.h>
#include <stdlib.h>
int indexy (int n, int tab [])
{
    for (int i=0; i<n; i++)
    {
        tab[i]=i;
    }
}
int main()
{
    int tablica[5];
    indexy(5,tablica);
    return 0;
}
