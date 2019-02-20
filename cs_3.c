#include<stdio.h>

int main()
{
	int a,n,b,c,sum,bin,fin;
	sum = 0;
	bin = 0;
	n = 0;
	fin = 0;
	char ch;
	char str[10];
	int s=0;
	printf("\nenter the roman numeral\n\n");
     
    gets(str);

      for(int i=0 ;str[i]!='\0';i++)
      {
        if(str[i]=='I')
        {
          if(str[i+1]=='V') {sum+=4; i++;}
          else if(str[i+1]=='X') {sum+=9; i++;}
          else sum+=1;
        }
        
        else if(str[i]=='V') sum+=5;
        else if(str[i]=='X')
        {
        if(str[i+1]=='L') {sum+=40; i++;}
        else if(str[i+1]=='C') {sum+=90; i++;}
        else sum+=10;
        } 
        else if(str[i]=='L') sum+=50;
        else if(str[i]=='C') sum+=100;
        
         
        //else sum+=100; 
     }
           
    printf("\nThe decimal equivalent is %d\n\n",sum);
    /*int c;
    printf("print some character\n\n");
    c=getchar();
    printf("\n\n%c\n\n",c) ;*/ 
      return 0;
      
}             	
	 
