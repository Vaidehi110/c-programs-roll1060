//FILE MANAGEMENT----> count no of line
#include<stdio.h>
int main()
{
    FILE *f;
    char ch;
    int l=1;

    f=fopen("t2.txt","r");
           
    while((ch=fgetc(f))!=EOF)
    {
        if(ch=='\n')
        {
            l++;
        }
    printf("%c",ch);
    
    }
    //printf("\n no of character = %d  ",c);
    printf("\n no of line = %d  ",l);


    fclose(f);
    return 0;
}

