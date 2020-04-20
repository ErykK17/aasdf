#include <stdio.h>
#include <stdlib.h>
int przepisz (int n, int tab1[],int tab2[],double tab3[])
{
    int j=0;
    int l=0;
    for (int i=1;i<2*n;i+=2)
    {
        tab3[i]=tab1[j];
        j++;
    }
    for(int k=0; k<2*n;k+=2)
    {
        tab3[k]=tab2[l];
        l++;
    }
}

int main()
{
    int tablica1[5]={1,2,3,4,5};
    int tablica2[5]={6,7,8,9,0};
    double tablica3[10];
    przepisz (5,tablica1,tablica2,tablica3);
    return 0;
}
