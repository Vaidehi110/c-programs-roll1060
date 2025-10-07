/*delete*/
#include<stdio.h>
void main()
{
  int a[6]={10,20,30,40,50};
  int i,pos=2;
  for(i=pos;i<4;i++)
    {
      a[i]=a[i+1];
    }
  for(i=0;i<4;i++)
    {
      printf(" %d ",a[i]);
    }
}

