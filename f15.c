//FILE MANAGEMENT----binary write----read file(fread)
#include<stdio.h>
struct stu
{
    int roll;
    float marks;
};
int main()
{
    FILE *f=fopen("st.dat","rb");

    struct stu s;

    fread(&s,sizeof(s),1,f);
    printf("%d %.2f",s.roll,s.marks);

    fclose(f);
    return 0;
}