#include<stdio.h>
#include<string.h>
struct student
{
    int ph;
    char name[50];
}a[50];
int main()
{
    int n;
    char ch1[50];
    printf("Enter the number of contacts to enter\n");
    scanf("%d",&n);
    printf("Enter all the details\n");
    for(int i=0;i<n;i++)
    {
        printf("\ncontact %d\n",i+1);
        scanf("%d%s",&a[i].ph,a[i].name);
    }
    puts("Enter the contact name to search");
    scanf("%s",ch1);
    for(int i=0;i<n;i++)
    {
        if(strcmp(a[i].name,ch1 ) == 0)
        printf("\ncontact number -  %d\n",a[i].ph);
        
    }
    return 0;
}