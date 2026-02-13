//FILE MANAGEMENT----appen--insert data in file
#include<stdio.h>
int main()
{
    FILE *f;
    f=fopen("t2.txt","a");

    fputs("\n",f);

    fputs("yashvi",f);
    
    fclose(f);
    return 0;
}