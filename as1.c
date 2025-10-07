#include<stdio.h>
int main()
{
  char str[100];
  printf(" \n enter your string :- ");
  fgets(str,sizeof(str),stdin);
  puts(str);
  return 0;
}
