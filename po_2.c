#include<stdio.h>
int main()
{
    int i;
    char *s;
    char str[50];
    puts("Enter the string");
    gets(str);    
    s=&str[0];
    for(i=0;s[i]!='\0';i++);
    printf("\nThe length of the string is  %d\n",i);
    return 0;
}