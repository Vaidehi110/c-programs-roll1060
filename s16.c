//print  hello 5 time using recursen
#include<stdio.h>
void print(int c)
{
    //char c="hello";
    if(c==0)
    return;
    print(c-1);
    printf(" hello \n");
}
int main()
{
    print(5);
    return 0;
}