#include<stdio.h>
int main()
{
int a,b,c;
printf("\nenter two numbers\n");
scanf("%d%d",&a,&b);
printf("\na=%d , b=%d\n",a,b);
c=a^b;
a=c^a;
b=c^b;
printf("\nafter swapping :\n a=%d , b=%d",a,b);
return 0;
}
