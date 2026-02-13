#include<stdio.h>
struct date
{
   int d,m,y;
};
struct emp
{
    int id;
    struct date doj;
};
int main()
{
  struct emp e;
  //e.id=101;
  
  //e.doj.d=01;
  // e.doj.m=10;
  //e.doj.y=2015;

  printf("\n enter id -");
  scanf("%d",&e.id);

  printf("\n enter date-month-year -");
  scanf("%d,%d,%d",&e.doj.d,&e.doj.m,&e.doj.y);

  printf(" \n emp id id %d",e.id);
  printf("\n emp date of joining os %d-%d-%d",e.doj.d,e.doj.m,e.doj.y);
  return 0;  
}
