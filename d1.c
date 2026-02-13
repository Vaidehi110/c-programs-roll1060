#include<stdio.h>
#include<string.h>
struct student{
    int roll_no;
    char name[50];
    float marks;
};
void std(struct student s1)

{
    s1.roll_no=101;
    strcpy(s1.name,"dhvani");
    s1.marks=50;
    printf("%d",s1.roll_no);
    printf("\n%s",s1.name);
    printf("\n%.2f",s1.marks);
}
int main()
{
    struct student s;
    std(s);
    return 0;
}