//practice malloc 
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p;
    p=(int *)malloc(6 * sizeof(int));
    for(int i=0;i<6;i++)
    {
        p[i]=(i+1)*10;
    }
    for(int i=0;i<6;i++)
    {
        printf("\n %d ",p[i]);
    }
    free(p);
    return 0;
}