#include<stdio.h>
int main()
{
int a,yrs,wks,days;
printf("\nenter the number of days\n");
scanf("%d",&a);
yrs=a/365;
wks=(a%365)/7;
days=(a%365)%7;
printf("\n\nThe no of years,weeks,days are %d %d %d",yrs,wks,days);
return 0;
}
