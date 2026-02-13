//FILE MANAGEMENT----> count no of word
#include<stdio.h>
int main()
{
    FILE *f;
    char ch;
    int w=1;

    f=fopen("t2.txt","r");
           
    while((ch=fgetc(f))!=EOF)
    {
        if(ch==' '||ch=='\n')
        {
            w++;
        }
    printf("%c",ch);
    
    }
    //printf("\n no of character = %d  ",c);
    printf("\n no of word = %d  ",w);


    fclose(f);
    return 0;
}

