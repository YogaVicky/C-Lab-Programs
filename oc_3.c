#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,c;
	printf("\nenter the x^2 term\n");
    scanf("%d",&a);
    printf("\nenter the x term\n");
    scanf("%d",&b);
    printf("\nenter the constant term\n");
    scanf("%d",&c);
    printf("\n\nThe quadratic equation is:\n(%d)x^2 +(%d)x + (%d)",a,b,c);  
	float b1,b2,d;
	d=b*b-4*a*c;
	if(d<0)
	printf("\nRoots are complex\n");
	else
	{
	b1=(-b+sqrt(d))/(2*a);
	printf("\n");
	b2=(-b-sqrt(d))/(2*a);
	printf("\n");
	printf("\n\nThe roots are %f and %f\n",b1,b2);
	}
	return 0;
}
