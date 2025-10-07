#include<stdio.h>
int main()
{
  char str[10]="vaidehi";
  int i,len=0,vowels=0;
  for(i=0;i<10;i++)
  {
    printf("str[%d] = %c \n",i,str[i]);
    if(str[i]!='\0')
  {
    len++;
    if(str[i]=='a'||'e'||'i'||'o'||'u'||'A'||'E'||'I'||'O'||'U')
    vowels++;
  }
  }
  for(i=len;i>=0;i--)
  {
    printf(" %c",str[i]);
  }
  
    printf("\n len of str is %d ",len);
    printf("\n no of vowels is %d",vowels);
    return 0;
}
