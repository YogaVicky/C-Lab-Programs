#include<stdio.h>
int main()
{
    int i,sum=0;
    char *s;
    char str[50];
    char s1,s2;
    puts("Enter the string");
    gets(str);    
    s=&str[0];
    puts("Enter the character to be replaced");
    s1=getchar();
    puts("Enter the character to replace ");
    scanf(" %c",&s2);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s1)
        s[i]=s2;
    }
    puts("The new string ");
    puts(s);
    return 0;
}