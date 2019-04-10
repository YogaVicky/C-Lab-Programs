#include<stdio.h>
int main( int a , char *b[] )
{
int i;
puts("The command line arguments are :");
for(int i=0;i<a;i++)
{
    printf( "%s", b[i]);
    printf("\n");
}
return 0;
}