//compute the product of element in a 1D array
#include<stdio.h>
int main()
{
  int n,i,num;
  long long product=1;
  printf("enter how many numbers :-");
  scanf("%d",&n);
  printf("enter %d numbers :-",n);
  for(i=0;i<n;i++)
  {   
   
     scanf("%d",&num);
     product=product*num;
  }
   printf("product = %lld",product);
  return 0;
}

