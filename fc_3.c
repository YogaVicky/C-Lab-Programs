#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    char ch[50],ch1[50];
    int c=0;
    p=fopen("file.txt","r");
    puts("Enter a word");
    gets(ch1);
    while((fscanf(p,"%s",ch))!=EOF)
    {
    if(strcmp(ch,ch1)==0)
    c++;
    }
    printf("The word is found %d times\n",c);
    return 0;
}