// 2. no paramiter with return type

#include<stdio.h>
//void sum();
int sum();
//void sum(int a,int b);
//int sum(int a,int b);
int main()
{
    int ans;
    ans = sum();
    printf("sum = %d ",ans);
    return 0;
}
int sum()
{
    int a=20,b=20;
    int sum;
    sum=a+b;
    return sum;
}