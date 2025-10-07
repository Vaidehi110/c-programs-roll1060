//delete an element frome an array
#include<stdio.h>
int main()
{
  int arr[10]={10,20,30,50,60};
  int n=5,pos=3,i;
  for(i=pos-1;i<n-1;i++)
  {
    arr[i]=arr[i+1];
  }
     
  n--;
  printf("array after deletion :- ");
   for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
  return 0;
}
