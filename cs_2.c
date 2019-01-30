#include<stdio.h>

int main()
{
	int a,b,c,rev;
	rev = 0;
	printf("\n\nenter the number to be checked\n");
	scanf("%d",&a);
	int d=a;
	while(d!=0)
	{ 
	  c=10;
	  b=d%c;
	  d=d/c;
	  rev*=c;
	  rev+=b;
	  
	}
	  
	if(rev==a)
	printf("\n\nThe given number is a palindrome number\n\n");
    else
    printf("\n\nThe given number is not a palindrome number\n\n");	   
    
    return 0;
}    
