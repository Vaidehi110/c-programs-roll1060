//w a p to except 2 number to using command line and perform +,-,*,/
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])   
{
    int a,b,sum,sub,mul;
    float div;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    sum=a+b;
    sub=a-b;
    mul=a*b;
    div=a/b;
    printf("\n a = %d ",a);
    printf("\n b = %d ",b);
    printf("\n a + b = %d ",sum);
    printf("\n a - b = %d ",sub);
    printf("\n a * b = %d ",mul);
    printf("\n a / b = %.2f ",div);

    return 0;
}