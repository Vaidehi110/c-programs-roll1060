//file open error handling
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f=fopen("nofile.txt","r");
    if(f==NULL)
    {
        printf("\n file not found");
        exit(1);
    }
    fclose(f);
    return 0;
}
