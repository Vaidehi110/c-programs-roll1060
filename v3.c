//double pointer
#include<stdio.h>
int main()
{
    int a=10;
    int *p;
    p=&a;
    int **q;  //double pointer
    q=&p;
    printf("\n a =%d",a);
    printf("\n add of a =%p",&a);
    printf("\n value of a =%d",*p);
    printf("\n value of p =%p",p);
    printf("\n a =%d",**q);
    printf("\n value of q =%p",q);
    return 0;

}