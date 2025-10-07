#include<stdio.h>
int main()
{
  char name[4][20]={"vaidehi","yashvi","krisha"};
  for(int i=0;i<3;i++)
  {
    printf("%s\n",name[i]);
  }
  return 0;
}
