#include<stdio.h>

int main()
{
	int a,n,b,c,sum,bin,fin;
	sum = 0;
	bin = 0;
	n = 0;
	fin = 0;
	 
	printf("\n\nenter the number to be converted\n");
	scanf("%d",&a);
	int d=a;
	while(d!=0)
	{ 
	  c=2;
	  b=d%c;
	  if(b==1)
	  sum+=1;
	  d=d/c;
	  bin*=10;
	  bin+=b;
	  n++;
	}
	while(n>0)
	{ 
	  c=10;
	  b=bin%c;
	  bin=bin/c;
	  fin*=c;
	  fin+=b;
	  n--;
	}
	  
	 printf("\nThe binary number is %d\nThe Number of 1's is %d\n\n",fin,sum);  
    
     
   
    
    return 0;
}    
