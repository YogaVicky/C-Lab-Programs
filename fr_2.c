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
    int a,b,c;
    printf("\nenter the sentinel control\n");
    while((c=getchar())==5)
    { 
    printf("\n%ld\n",main);
    printf("\nenter two numbers\n");
    scanf("%d%d",&a,&b);
    printf("Before swap:\na=%d,b=%d",a,b);
    swap(&a,&b);
    printf("\n%ld\n",swap);
    printf("\nAfter swap:\na=%d,b=%d\n",a,b);
    }
    return 0;
}