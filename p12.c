#include<stdio.h>
int main()
{
  char str[50];
  int i,vowels=0;
   printf("\n enter str :-");
   fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    vowels++; 
  }
  }
   printf("\n your str is %s",str);
   printf("\n no of vowels is %d",vowels);
    return 0;
}
