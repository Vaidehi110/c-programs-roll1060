//call by reference
#include<stdio.h>
void show(int *a,int *b)
{
    *a=*a+10;
    *b=*b+20;
    printf("\n a = %d ",*a);
    printf("\n b = %d ",*b);
}
int main()
{
    int a=10,b=20;
    show(&a,&b);
    printf("\n a = %d ",a);
    printf("\n b = %d ",b);
    return 0;
}
//call by value
#include<stdio.h>
void show(int a,int b)
{
    a=a+10;
    b=b+20;
    printf("\n a = %d ",a);
    printf("\n b = %d ",b);
}
int main()
{
    int a=10,b=20;
    show(a,b);
    printf("\n a = %d ",a);
    printf("\n b = %d ",b);
    return 0;
}