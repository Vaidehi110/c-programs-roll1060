// 3. with paramiter no return type

#include<stdio.h>
//void sum();
//int sum();
void sum(int a,int b);
//int sum(int a,int b);
int main()
{
    sum(20,20);
    return 0;
}
void sum(int a,int b)
{
    int sum;
    sum=a+b;
    printf("sum = %d ",sum);
}