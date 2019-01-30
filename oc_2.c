#include<stdio.h>
int main()
{
int a,r;
printf("\nUSING IF:\n");
printf("\nenter the number\n");
scanf("%d",&a);
if(a%2==0)
   printf("even");
else
printf("odd");
printf("\nUSING SWITCH:\n");
printf("\nenter the number\n");
scanf("%d",&a);
r=a%2;
switch(r)
{
case 0:
printf("even");
break;
case 1:
 printf("odd");
 }
return 0;
}
