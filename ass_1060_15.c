//compute the sum of digits of a numbers
#include<stdio.h>
int main()
{
  int n,sum=0,digit;
  printf("\n enter the number  :-");
  scanf("%d",&n);
  while(n>0)
  {
  digit=n%10;
sum=sum+digit;
n=n/10;
  }
  printf("sum of numbers :%d \n",sum);
  return 0;
}
