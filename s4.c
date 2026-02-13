//find maximum salary with all detials
#include<stdio.h>
struct emp
{
    int id;
    char name[50];
    float salary;
}e[5];

int main()
{
    int i,m,m1=0;
    for(i=0;i<5;i++)
    {
        scanf(" \n%d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }
    /*for(i=0;i<5;i++)
    {
        printf("\n enter id , name and salary - %d %s %f",&e[i].id,e[i].name,&e[i].salary);
    }*/
    for(i=0;i<5;i++)
    {
        if(e[i].salary>m1)
        {
            m1=e[i].salary;
            m=i;
        }
    }
        printf("\n  %d %s %f",e[m].id,e[m].name,e[m].salary);

    return 0;
}