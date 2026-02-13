#include<stdio.h>
struct stu
{
    int rollno;
    char name[50];
}s[5];

int main()
{
    //struct stu s[4];
    int i,search;
    for(i=0;i<5;i++)
    {
        printf("\n enter rollno and name -");
        scanf("%d %s",&s[i].rollno,s[i].name);

    }
    printf("\n enter which number you want -");
    scanf("%d",&search);
    for(i=0;i<5;i++)
    {
        if(s[i].rollno==search)
        {
            printf("\n rollno is %d and name is %s ",s[i].rollno,s[i].name);

        }
    }
    
  return 0;
}