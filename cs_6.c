#include<stdio.h>

int main()
{
	int a,n,b,c,sum,bin,fin;
	n = 0;
	int f1,f2,f3,d;
	printf("\nenter the number of line height for the triangle\n\n");
	scanf("%d",&c);
      int i,j;
      printf("\n");
      printf("\n");
     for(i=1;i<=c;i++)
     {
       for(int z=i;z<c;z++)
       printf(" ");
       for(j=0;j<=i;j++)
        { d=1;  
           for(f1=1;f1<=i;f1++)
           d=d*f1;
           for(f2=1;f2<=(i-j);f2++)
           d=d/f2;
           for(f2=1;f2<=j;f2++)
           d=d/f2;
           printf("%d ",d);
           
        }
        printf("\n"); 
     }
      
      
   return 0;
      
}             	
	 
