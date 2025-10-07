//w a p to convert decimal into octal
#include<stdio.h>
int main()
{
  
  int n,rem,b[30],i=0,r;
  
  printf("enter the number :-");
  scanf("%d",&n);
 
  for(i=0;n>0;i++)
  {
    rem=n%8;
    b[i]=rem;
    n=n/8;
  }
  printf("octal :-");
  for(r=i-1;r>=0;r--)
  {
    printf("%d",b[r]);
  }
  
  return 0;
}
