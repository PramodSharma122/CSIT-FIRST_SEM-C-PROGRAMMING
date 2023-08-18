// WAP to input a number and display it's factrorial. 
#include<stdio.h>
void main()
{
    int i,n,fac=1;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=1; i<=n; i++)
    {
        fac=fac*i;
    }
    printf("factrorial is %d\n",fac);
}