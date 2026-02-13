// 4. with paramiter with return type

#include<stdio.h>
//void sum();
//int sum();
//void sum(int a,int b);
int sum(int a,int b);
int main()
{
    printf(" sum =%d ",sum(50,20));
    return 0;
}
int sum(int a,int b)
{
    return a+b;
}