//print sum of 5 using recursen
/*#include<stdio.h>
int main()
{
    int sum,i;
   int a[5]={1,2,3,4,5};
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
        //printf("%d \n",sum)
    }
printf("%d \n",sum);
    return 0;
}*/
#include<stdio.h>
int sum(int n)
{
    if(n==0)
    
        return 0;
    //else
        return n + sum(n-1);
    
}
int main()
{
    int result;
    result=sum(5);
    
        //printf("%d \n",sum)
   
printf("%d \n",result);
    return 0;
}
