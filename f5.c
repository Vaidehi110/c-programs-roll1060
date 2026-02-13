//FILE MANAGEMENT----input data----in formate
#include<stdio.h>
int main()
{
    FILE *f=fopen("stu.txt","w");  //file name , mode
   
    if(f==NULL)
    {
        printf("\n file not open");
    }
    else
    {
        printf("\n file open");
        fprintf(f,"%d %s %.2f",1,"vaidehi",92.27);
        printf("\n data return ");
    fclose(f);
    return 0;
    }
}
