//memory allocation in structure
#include<stdio.h>
#include<stdlib.h>
int main()
{
int n;
float *marks;

printf(" \n enter no of student :- ");
scanf("%d",&n);

marks=(float *)malloc(n * sizeof(float));
for(int i=0;i<n;i++)
{
    scanf("%f",&marks[i]);
}
float sum=0;
for(int i=0;i<n;i++)
{
    sum=sum+marks[i];
}
printf("\n avg :- %.2f ",sum/n);
free(marks);
return 0;
}