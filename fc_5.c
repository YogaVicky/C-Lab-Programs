#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
  FILE *p;
  p = fopen( "file.txt","r+" );
  char ch;
  int num=0;
  while ( ( ch = fgetc(p) ) != EOF )
  {
    if( ch == '\n')
    num++;
  }
  printf("\nThe number of lines is %d\n",num);
  fclose(p);
  return 0;
}