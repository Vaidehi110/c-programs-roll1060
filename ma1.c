/* w a p to perform array opration in following 
1.insert
2.update
3.delete
4.search
5.acs shorting
6.decs shorting
7.display
8.exit
in above functionality you can use user difined fun as well as do while for creating menu
*/
#include<stdio.h>
void get();
void ins();
void upd();
void del();
void sea();
void acss();
void decss();
void dis();
void exit();
void main()
{
  int ch,a[5]={10,50,30,20,40};
  printf("        MENU      ");
  printf("\n 1.Insert                    ");
  printf("\n 2.Update                    ");
  printf("\n 3.Delete                    ");
  printf("\n 4.Search                    ");
  printf("\n 5.Acs shorting              ");
  printf("\n 6.Decs shorting             ");
  printf("\n 7.Display                   ");
  printf("\n 8.Exit                      ");

  printf("\n Enter your choice :-");
  scanf("%d",&ch);
  
  switch(ch)
  {
    case 1:
      get();
      ins();
    break;
    default:
    printf("\n envalid choice...");
  }
}

