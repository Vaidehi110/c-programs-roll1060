//dynamic memory allocation
//---------MALLOC---------
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *p,i;
    p=(int *)malloc(5 * sizeof(int));
    p[0] = 10;
    p[1] = 20;
    p[3] = 40;
    for(i=0;i<5;i++)
    {
        printf("\n %d ",p[i]);
    }
    return 0;
}
