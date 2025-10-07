#include<stdio.h>
int main()
{
  char str[50];
  int i,len=0;
  printf("enter the str");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
   printf("%c",str[i]);
  len++;
  }
  printf("\n len of str %d",len);
  return 0;
}
