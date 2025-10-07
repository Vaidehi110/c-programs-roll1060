//insert an element at a specific position in an array
#include<stdio.h>
int main()
{
  int arr[10]={10,20,30,50,60};
  int n=5,pos=4,value=4,i;
  for(i=n;i>=pos;i--)
  {
    arr[i]=arr[i-1];
  }
     arr[pos-1]=value;
  n++;
  printf("array after insertion :- ");
   for(i=0;i<n;i++)
    printf("%d  ",arr[i]);
  return 0;
}
