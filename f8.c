//FILE MANAGEMENT----input data----in formate----read(fscanf)
#include<stdio.h>
int main()
{
    FILE *f=fopen("stu.txt","r");
    int roll;
    char name[100];
    float marks;
    fscanf(f,"%d %s %f",&roll,name,&marks);
    printf("%d %s %.2f",roll,name,marks);

    fclose(f);
    return 0;
}
