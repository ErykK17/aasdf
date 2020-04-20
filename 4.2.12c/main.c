#include <stdio.h>
#include <stdlib.h>
void przesun(unsigned int n, int tab[])
{
    x=tab[n-1];
    for (int i=n-2;i>=0;i--)
    {
        tab[i+1]=tab[i];
        tab[0]=x
    }
}
int main()
{
    printf("Hello world!\n");
    return 0;
}
