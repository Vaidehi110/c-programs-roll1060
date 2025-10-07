/* wap to search a element in one dimentional array all array element enter by user
enter value of a[0]=11
enter value of a[0]=12
enter value of a[0]=13
which element you want you find=11
11 is avalabele on index of 0
*/
#include<stdio.h>
void main()
{
  int i,a[1000],search,n,f=0;
 printf("\n enter arrey size :-");
 scanf("%d",&n);
  for(i=0;i<=n;++i)
  {
    printf("\n enter value of a[%d] :-",i);
    scanf("%d",&a[i]);
  }
    printf("\n enter the search element:-");
    scanf("%d",&search);
   for(i=0;i<=n;++i)
    {
    if(search==a[i])
    {
    printf("element %d found at index %d \n",search,i);
    f=1;
    break;
  }
}
    if(!f)
    {
      printf("element %d not found\n",search);
    }
}
