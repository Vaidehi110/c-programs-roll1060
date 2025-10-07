//compare lenght of two string
#include<stdio.h>
#include<string.h>
 int main()
 {
  char str1[50],str2[50];
  printf("enter first string :-");
 fgets(str1,sizeof(str1),stdin);
  printf("enter second string :-");
  fgets(str2,sizeof(str2),stdin);
  int len1=strlen(str1);
  int len2=strlen(str2);
   if(len1>len2)
     printf(" first string is longer ");
  else if(len1<len2)
     printf(" second string is longer ");
  else
     printf(" both string are same ");
  return 0;
}
