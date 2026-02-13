//FILE MAMAGEMENT----input data----one char
#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("t2.txt","w");  //file name , mode
    if(f==NULL)
    {
        printf("\n file not open");
    }
    else
    {
        printf("\n file open");
        fputc('A',f);    //to write in file
        printf("\n data return ");
    }
    fclose(f);
    return 0;
}
