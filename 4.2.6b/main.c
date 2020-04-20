#include <stdio.h>
#include <stdlib.h>
int przepiszwspak (unsigned int n, int tab1[],int tab2[])
{
    for (int i=0;i<n;i++)
    {
        tab2[n-i-1]=tab1[i];
    }
}
int main()
{
    int tablica1[5]={1,2,3,4,5};
    int tablica2[5]={6,7,8,9,0};
    przepiszwspak(5,tablica1,tablica2);
    return 0;
}
