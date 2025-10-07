/*wap to find out factaurial to given no
like
enter no:-5
5
4
3
2
1 factaurial=120*/
#include<stdio.h>
void main()
{
  int i;
  int no;
  printf("enter the no :-");
  scanf("%d",&no);
  for(i=1;i>=5;i++)
  {
    printf(" %d * %d * %d * %d * %d \n",no*no*no*no*no);
    printf("\n factaurial = %d",no);
  }
}
