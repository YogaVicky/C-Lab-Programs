#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE *p;
  p = fopen( "file.txt","r" );
  char ch;
  while ( ( ch = fgetc(p) ) != EOF )
  {
    if( ch == 13)
    printf("Enter");
    printf("%c", ch );
  }
  fclose(p);
  return 0;
}