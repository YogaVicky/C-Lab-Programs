#include<stdio.h>
int main()
{
int a,b,res;
res=0;
b=4;
printf("\nenter the number to be multiplied\n");
scanf("%d",&a);
while (b > 0) 
    { 
        
         if (b & 1) 
             res = res + a; 
  
        
         a = a << 1; 
         b = b >> 1; 
     } 
printf("\nproduct : %d\n",res);
return 0;
}
