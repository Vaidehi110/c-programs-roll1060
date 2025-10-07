/* w a p to except a string from a user and to count no of vowels no space, and len of the string*/
#include<stdio.h>
int main()
{
  char str[50];
  int i,len=0,vowels=0;
  printf("\n enter str :-");
  fgets(str,sizeof(str),stdin);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
  {
    vowels++; 
  }
    len++;
  }
   puts("str is :-");
   puts(str);
    printf("\n len of str is %d ",len);
    printf("\n no of vowels is %d",vowels);
    return 0;
}
