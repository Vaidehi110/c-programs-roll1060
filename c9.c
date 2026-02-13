//reverse file content
#include<stdio.h>
int main()
{
    FILE *f=fopen("t2.txt","r");
    long size;
    char ch;
    fseek(f,0,SEEK_END);
    size=ftell(f);

    while (size--)
    {
        fseek(f,size,SEEK_SET);
        ch=fgetc(f);
        printf("%c",ch);
    }
    fclose(f);
    return 0;
}