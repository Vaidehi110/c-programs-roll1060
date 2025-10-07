/* w a p to except a string from the user and count length of the string*/
#include<stdio.h>
int main()
{
  char str[30];
  int i,len=0;
  printf(" \n enter string :- ");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
   len++;
   }
    puts(" string is :-");
    puts(str);
    printf("\n len = %d ",len);
  return 0;
}
