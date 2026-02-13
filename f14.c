//FILE MANAGEMENT----binary file----binary write----create file
#include<stdio.h>
struct stu
{
    int roll;
    float marks;
};
int main()
{
    FILE *f=fopen("st.dat","wb");

    struct stu s={101,90.00};

    fwrite(&s,sizeof(s),1,f);

    fclose(f);
    return 0;
}