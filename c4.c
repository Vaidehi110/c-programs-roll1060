//COMMAND LINE ARGUMENT----loop
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])   
{
    int i;
    printf("\n no of argument = %d ",argc);
    for(i=0;i<argc;i++)
    {
         printf("\n argv[%d] = %s ",i,argv[i]); 
    }
    return 0;
}