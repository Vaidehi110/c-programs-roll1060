#include<stdio.h>
int main()
{
  int no,i,c=0;
  printf("enter the no :-");
  scanf("%d",&no); 
  for(i=1;i<=no;i++)
    {
      if(no%i==0)
        {
          c++;
        }
    }  
      if(c==2)
        {
          printf(" prime number ");
        } 
       else
        {
          printf("non prime number ");
        } 
 return 0;
}
