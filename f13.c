//FILE MANAGEMENT----fseek
#include<stdio.h>
int main()
{
    FILE *f=fopen("t2.txt","r");
    char ch;

    fseek(f,6,SEEK_SET); //6---> print position of char

    ch=fgetc(f);

    printf("\n char = %c ",ch);
    
    fclose(f);
    return 0;
}