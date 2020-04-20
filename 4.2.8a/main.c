#include <stdio.h>
#include <stdlib.h>
int przepisz (unsigned int n, int tab1[],int tab2[], double tab3[])
{
    for (int i=0;i<n;i++)
    {
        tab3[i]=tab1[i];
    }
    for (int j=0;j<n;j++)
    {
        tab3[j+n]=tab2[j];
    }
}
int main()
{
    int tablica1[5]={1,2,3,4,5};
    int tablica2[5]={6,7,8,9,0};
    double tablica3 [10];
    przepisz(5,tablica1,tablica2,tablica3);
    return 0;
}
