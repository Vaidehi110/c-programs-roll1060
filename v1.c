#include<stdio.h>
struct stu
{
    int roll;
    char name[50];
    float marks;
};
void std(struct stu s1)
{
    printf("\n enter a student 1 roll no :- ");
    scanf("%d",&s1.roll);
    getchar();
    printf("\n enter a student 1 name :- ");
    fgets(s1.name,sizeof(s1.name),stdin);
    printf("\n enter a student 1 marks :- ");
    scanf("%f",&s1.marks);
    printf("\n student 1 details :- ");
    printf("\n roll no :-%d \n name :-%s \n marks :-%f",s1.roll,s1.name,s1.marks);
}
int main()
{
    struct stu s;
    std(s);
    return 0;
}