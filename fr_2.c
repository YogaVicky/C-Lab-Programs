#include<stdio.h>
void swap(int *c,int *d)
{
    int temp;
    temp=*c;
    *c=*d;
    *d=temp;    
}
int main()
{
    int a,b; 
    printf("\nenter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swap:\na=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\nAfter swap:\na=%d,b=%d\n",a,b);
    return 0;
}