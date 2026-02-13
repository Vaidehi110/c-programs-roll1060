//memory allocation in structure
#include<stdio.h>
#include<stdlib.h>
struct stu
{
    int roll;
    float marks;
};

int main()
{
struct stu *s;
s=(struct stu *)malloc(sizeof(struct stu));
s->roll=1;
s->marks=90.27;
printf("roll : %d \n mark : %f",s->roll,s->marks);
return 0;
}