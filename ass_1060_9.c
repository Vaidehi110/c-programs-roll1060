//reaverse word in string
#include<stdio.h>
#include<string.h>
int main()
{
  char str[50];
  printf("enter a string :-");
  fgets(str,sizeof(str),stdin);
  int i,len=strlen(str);
  printf("reverse string :-");
  for(i=len-1;i>=0;i--)
  {
    printf("%c",str[i]);
  }
  return 0;
}

