#include<stdio.h>

int main()
{
	int a,b,c;
	printf("\n\nenter the operation to be performed\n1.add\n2.sub\n3.mul\n4.div\n");
	scanf("%d",&c);
	switch(c)
	{
	case 1:
	printf("\nenter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nThe sum is %d\n",a+b);
	break;
	case 2:
	printf("\nenter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nThe difference is %d\n",a-b);
	break;
	case 3:
	printf("\nenter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nThe product is %d\n",a*b);
	break;
	case 4:
	printf("\nenter the two numbers\n");
	scanf("%d%d",&a,&b);
	printf("\nThe quotient is %f\n",a/b);
	break;
	default:
	printf("\nChoose the correct option\n");
	}
	return 0;
	}
	
	
