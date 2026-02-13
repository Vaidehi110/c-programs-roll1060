//COMMAND LINE ARGUMENT----atoi
#include<stdio.h>
#include<stdlib.h>
int main(int argc,int *argv[])   
{
    int a;
    a=atoi(argv[1]);
    printf(" a = %d ",a);
    return 0;
}