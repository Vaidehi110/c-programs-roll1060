/* w a p to print 1 to n numbers and to performed sum of all numbers...
enter value of n:- 5
1
2
3
4
5
sum = 15
*/
#include<stdio.h>
void main()
{
  int n,sum=0;
  printf("enter the value of no :- ");
  scanf("%d",&n);
  int i=1;  
  do
  {
    printf("\n %d",i);
    sum=sum+i;
    i++;
  }
  while(i<=n);
  printf("\n sum = %d",sum);
}  
