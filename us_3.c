#include<stdio.h>
#include<string.h>
struct acc
{
    int ac,mobile;
    char name[50],addr[50];
}a[50];
int main()
{
    int i,n,chk;
    char ch1[50];
    printf("Enter the number of accounts to enter\n");
    scanf("%d",&n);
    printf("Enter all the details\n");
    for(int i=0;i<n;i++)
    {
        printf("\naccount %d\n",i+1);
        scanf("%d%d%s%s",&a[i].ac,&a[i].mobile,a[i].name,a[i].addr);
    }
    puts("Enter the account name to search");
    scanf("%s",ch1);
    for( i=0;i<n;i++)
    {
        if(strcmp(a[i].name,ch1 ) == 0)
        printf("The details are \n%d\n%d\n%s\n%s\n",a[i].ac,a[i].mobile,a[i].name,a[i].addr);  
    }
    puts("Do u want to insert or delete");
    scanf("%d",&chk);
    switch(chk)
    {
        case 1:
        puts("Enter");
        n++;
        scanf("%d%d%s%s",&a[i].ac,&a[i].mobile,a[i].name,a[i].addr);
        puts("Added");
        for(int i=0;i<n;i++)
    {
        printf("\naccount %d\n",i+1);
        printf("\n%d\n%d\n%s\n%s\n",a[i].ac,a[i].mobile,a[i].name,a[i].addr);
    }
        break;
        case 2:
        puts("Enter the name to delete");
        scanf("%s",ch1);
        for( i=0;i<n;i++)
    {
        if(strcmp(a[i].name,ch1 ) == 0)
        {
            for(int j=i;j<n-1;j++)
            {
                a[j]=a[j+1];
            }
            break;
        }  
    }
        puts("Deleted");
         for(int i=0;i<n-1;i++)
    {
        printf("\naccount %d\n",i+1);
        printf("\n%d\n%d\n%s\n%s\n",a[i].ac,a[i].mobile,a[i].name,a[i].addr);
    }
        break;
    }
    return 0;

}