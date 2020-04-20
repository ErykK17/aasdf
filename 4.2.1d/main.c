#include <stdio.h>
#include <stdlib.h>
int bezwzglednosc (int n, int tab [])
{
    for (int i=0; i<n; i++)
    {
        tab[i]=abs(tab[i]);
    }
}
int main()
{
    int tablica[5]={-2,-1,0,1,2};
    bezwzglednosc(5,tablica);
    return 0;
}
