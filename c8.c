//merge 2 file
#include<stdio.h>
int main ()
{
    FILE *f1=fopen("stu.txt","r");
    FILE *f2=fopen("t2.txt","r");
    FILE *f3=fopen("mer.txt","w");

    char ch;

    while((ch=fgetc(f1))!=EOF)
    fputc(ch,f3);

    while((ch=fgetc(f2))!=EOF)
    fputc(ch,f3);

    fclose(f1);
    fclose(f2);
    fclose(f3);

    return 0;
}