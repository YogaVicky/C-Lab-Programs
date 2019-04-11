#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    FILE *p;
    char ch[50],ch1[50];
    int n,m;
    int i=0,j;
    float sum=0;
    int n1=0;
    int a[20];
    p=fopen("file1.txt","r");
    while((fscanf(p,"%d",&n))!=EOF)
    {    
    sum+=n;
    n1++;
    a[i]=n;
    i++;
    }
    int maxValue = 0, maxCount = 0;
    for (i = 0; i < n; i++) 
        {
        int count = 0;
        for (j = 0; j < n; ++j) {
            if (a[j] == a[i])
                ++count;
        }
        if (count > maxCount) {
            maxCount = count;
            maxValue = a[i];
        }
        }
    float f= sum/n1;
    printf("The mean is %f",f);
    printf("The mode is %d",maxValue);
    return 0;
}