#include <stdio.h>
#include <stdlib.h>
int podwajanie (int n, int tab [])
{
    for (int i=0; i<n; i++)
    {
        tab[i]*=2;
    }
}
int main()
{
    int tablica[5];
    podwajanie(5,tablica);
    return 0;
}
