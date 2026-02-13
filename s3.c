/*
1 vaidehi
2 mansi
5 yashvi
3 krisha
4 ridhhi
*/
#include<stdio.h>
#include<string.h>
struct stu
{
    int rollno;
    char name[50];
}s[5];

int main()
{
    //struct stu s[5];
    int i,j,temp;
    char ch[10];
    for(i=0;i<5;i++)
    {
        printf("\n enter rollno and name -> ");
        scanf("%d %s",&s[i].rollno,s[i].name);

    }

   /* printf("\n enter which number you want -> ");
    scanf("%d",&search);*/

    /*for(i=0;i<5;i++)
    {
        if(s[i].rollno==search)
        {
            printf("\n rollno is %d and name is %s ",s[i].rollno,s[i].name);

        }
    }
*/
    for(i=0;i<5;i++)
    {
        for(j=i+1;j<5;j++)
        {
            if(s[i].rollno>s[j].rollno)
            {
                temp=s[i].rollno;
                s[i].rollno=s[j].rollno;
                s[j].rollno=temp;
                strcpy(ch,s[i].name);
                strcpy(s[i].name,s[j].name);
                strcpy(s[j].name,ch);
            }
        //    printf("\n after shorting ");
            
        }

    }
     //printf("\n after shorting ");
     for(i=0;i<5;i++)
     {
        printf("\n %d  %s",s[i].rollno,s[i].name);
     }
    
  return 0;
}