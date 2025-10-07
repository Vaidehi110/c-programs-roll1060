//compare two string
#include<stdio.h>
#include<string.h>
int main()
{
  char str1[50]="vaidehii"; 
  char str2[50]="yashvi";
 
   if(str1==str2)
    printf("equal"); 
   else if(str1<str2)
    printf("first is smaller"); 
   else 
    printf("first is greater"); 
  return 0;
}
