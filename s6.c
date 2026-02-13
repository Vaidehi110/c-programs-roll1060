//   type of udf:
// 1. no paramiter no return type

#include<stdio.h>
void sum();
//int sum();
//void sum(int a,int b);
//int sum(int a,int b);
int main()
{
    sum();
    return 0;
}
void sum()
{
    int a=10,b=20;
    int sum;
    sum=a+b;
    printf("sum = %d",sum);
}