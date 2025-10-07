#include<stdio.h>
void main()
{
  int a[100][100],b[100][100],mul[100][100],i,j,r,c;
  printf("\n enter number row :-");
  scanf("%d",&r);
  printf("\n enter number cols :-");
  scanf("%d",&c);
      
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          printf("\n enter the value of a[%d][%d] :-",i,j);
          scanf("%d",&a[i][j]);
        }
    }
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          printf("\n enter the value of b[%d][%d] :-",i,j);
          scanf("%d",&b[i][j]);
        }
    } 
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          mul[i][j]=a[i][j]*b[i][j];
        }
          
    }
 printf(" \n a metrix \n");
  for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          printf(" %d ",a[i][j]);
        }
          printf("\n");
    }
     
     printf(" \n b metrix \n");
    for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          printf(" %d ",b[i][j]);
        }
          printf("\n");
    } 
  printf("\n mul metrix \n");
     for(i=0;i<r;i++)
    {
       for(j=0;j<c;j++)
        {
          printf(" %d ",mul[i][j]);
        }
          printf("\n");
    } 
}
