#include <stdio.h>
#include <stdlib.h>
void odwroc(unsigned int n, int tab[])
{
    int x;
    for (i=0;i<n/2;i++)
    {
        x=tab[i];
        tab[i]=tab[n-1-i];
        tab[n-1-i]=x;
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
