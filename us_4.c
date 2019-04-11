#include<stdio.h>
#include<string.h>
union sample
{
    int a ;
    char b[2];
}s;
int main()
{
    s.a=5;
    s.b[1]='a';
    s.b[2]='b';
    printf("\nBefore swapping: %d %c %c\n",s.a,s.b[1],s.b[2]);
    char temp;
    temp=s.b[1];
    s.b[1]=s.b[2];
    s.b[2]=temp;
    printf("\nAfter swapping: %d %c %c\n",s.a,s.b[1],s.b[2]);
    return 0;
}