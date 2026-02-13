//FILE MANAGEMENT----input data----in formate----read(fgets)
#include<stdio.h>
int main()
{
    FILE *f=fopen("stu.txt","r");
    char str[100];
    while(fgets(str,100,f)!=NULL)
    printf("%s",str);
    fclose(f);
    return 0;
}
