#include<stdio.h>
struct s1
{
    int a;
};
void show(struct s1 *s)
{
   
    printf("a=%d",s->a);
     s->a++;
}
int main()
{
    struct s1 s={10};
    show(&s);
    printf("\na=%d",s.a);
   
    return 0;
}
