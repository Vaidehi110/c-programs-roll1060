//find the largest of five numbers
#include<stdio.h>
int main()
{
  int a,b,c,d,e,largest;
  printf("enter five numbers:");
  scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
  largest=a;
  if(b>largest)
   largest=b;
  if(c>largest)
   largest=c;
 if(d>largest)
   largest=d;
 if(e>largest)
   largest=e;
  
  printf("largest number is:%d \n",largest);
  return 0;
}
