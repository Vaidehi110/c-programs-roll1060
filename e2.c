//compute sum of element a1D array
#include<stdio.h>
int main()
{
  int n,i,ar[50],sum=0;
  printf("Enter the value of number :-");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
   {
     printf("\n %d ",ar[i]); 
     sum=sum+ar[i];
   }
  printf("\n sum = %d ",sum);
return 0;
}
