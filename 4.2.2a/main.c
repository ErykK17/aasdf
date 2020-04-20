#include <stdio.h>
#include <stdlib.h>
float qwer(int n, int tab[])
{
    float asdf=0;
    for (int i=0;i<n;i++)
    {
        asdf+=tab[i];
    }
    asdf/=n;
    return asdf;
}
int main()
{
    int tablica[]={3,7,4,8,2}
    printf("%f",qwer(5,tablica));
    return 0;
}
