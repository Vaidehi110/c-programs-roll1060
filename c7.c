//copy one file to another file
#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *f1=fopen("stu.txt","r");
    FILE *f2=fopen("t2.txt","w");

    char ch;

    while((ch=fgetc(f1))!=EOF)
    fputc(ch,f2);

    fclose(f1);
    fclose(f2);

    return 0;
}