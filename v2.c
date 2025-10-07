#include<stdio.h>
void main()
{
  int i;
  int no;
  printf("enter the value of no :-");
  scanf("%d",&no);
  for(i=1;i<=10;i++)
  {
    printf(" %d * %d = %d \n",no,i,no*i);
  }
}
