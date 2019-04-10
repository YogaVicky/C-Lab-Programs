#include<stdio.h>
int main()
{
    int i,sum=0;
    char *s;
    char str[50];
    puts("Enter the string");
    gets(str);    
    s=&str[0];
    for(i=0;s[i]!='\0';i++)
    {
        sum+=s[i];
    }
    printf("\nThe sum of ASCII values is  %d\n",sum);
    return 0;
}