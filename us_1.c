#include<stdio.h>
struct student
{
    int rollno,batch,year,sem;
    char name[50];
}a;
int main()
{
    printf("Enter all the details\n");
    scanf("%d%d%d%d%s",&a.rollno,&a.batch,&a.year,&a.sem,a.name);
    printf("The details are \n%d\n%d\n%d\n%d\n%s\n",a.rollno,a.batch,a.year,a.sem,a.name);
    return 0;
}