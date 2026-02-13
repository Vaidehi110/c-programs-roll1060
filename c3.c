//COMMAND LINE ARGUMENT----
#include<stdio.h>
#include<stdlib.h>
int main(int argc,char *argv[])   
{
    printf("\n argv[%d] = %s ",1,argv[1]); //argument value (argv)
    printf("\n no of argument = %d ",argc);//argument count (argc)
    return 0;
}