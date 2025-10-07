#include<stdio.h>
int main()
{
  char names[4][20];
  int i;
  printf("enter 4 names :- \n");
  for(i=0;i<4;i++)
  {
    scanf("%s",names[i]);
  }
  printf("\n names entered are :-\n");
  for(i=0;i<4;i++)
  {
    scanf("%s\n",names[i]);
  }
  return 0;
}
