#include<stdio.h>
int main()
{
    int a,i,j,k,sum,count;
    sum=0;
    count=0;
    char *s[50],ch[50];
    puts("How many strings do you want to enter");
    scanf("%d",&a);
    puts("Enter the strings");
    for(i=0;i<a;i++)
    {
        gets(s[i]);
    }
    int pos;
    puts("Enter the word to be checked");
    gets(ch);
    for(i=0;i<a;i++)
    {
    for(j=0;s[i][j]!='\0';j++)
    {
        if(ch[0]==s[i][j])
        {
            pos = j;
            for(k=0;ch[k]!='\0';k++)
            {
                if(ch[k]==s[i][j])
                {
                    count=0;
                    j++;
                }
            }
        }
            if(count ==0)
            {
            printf("\nThe substring is found at the position %d in the string number %d",pos+1,i+1);
            }  
    }
    }
        return 0;
}