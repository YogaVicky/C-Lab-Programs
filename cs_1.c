#include<stdio.h>

int main()
{
	int a,b,c,sum,n;
	sum = 0;
	n = 0;
	int sum1;
	printf("\n\nenter the number to be checked\n");
	scanf("%d",&a);
	int d=a;
	int ch=a;
	while(ch!=0)
	{
	ch=ch/10;
	n++;
	printf("\n%d\n",n);
	}
	while(d!=0)
	{ 
	  c=10;
	  b=d%c;
	  d=d/c;
	  sum1=b;
	  int j=n; 
	  while(j>1)
	  {
	  sum1*=b;
	  j--;
	  }
	  sum+=sum1;

	}
	  
	if(sum==a)
	printf("\n\nThe given number is an armstrong number\n\n");
    else
    printf("\n\nThe given number is not an armstrong number\n\n");	   
    
    return 0;
}    
