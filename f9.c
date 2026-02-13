//FILE MANAGEMENT----> count no of char in word
#include<stdio.h>
int main()
{
    FILE *f;
    char ch;
    int c=0;

    f=fopen("t2.txt","r");

    while((ch=fgetc(f))!=EOF)
    {
    printf("%c",ch);
    c++;
    }
    printf("\n no of character = %d  ",c);

    fclose(f);
    return 0;
}

