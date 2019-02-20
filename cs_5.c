#include<stdio.h>

int main()
{
	int a,n,b,c,sum,bin,fin;
	sum = 0;
	bin = 0;
	n = 0;
	fin = 0;
	printf("\nenter the odd number of lines for the pattern\n\n");
	scanf("%d",&c);
	if(c%2 == 0)
	printf("\nu entered an even nunber\ncompile the program again to enter an odd number\n");
	else
	 {
     	for(int i=0 ;i<c ;i++)
     	 { 
     	  if(c/2 >= i)
     	  { a = c/2-i; b = c-1-a;}
     	  else
     	  { a = i-c/2; b = c-1-a;}
           for(int j = 0;j < c ;j++)
            {
              if((j==a) || (j==b))
              printf("*");
              else printf(" ");
            }
            printf("\n"); 
          }
      }
      
      return 0;
      
}             	
	 
