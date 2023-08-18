// WAP to input a number from user and display reverse of digits.
#include<stdio.h>
void main()
{
    int n,r,rev=0;
    printf("enter a num:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    printf("reverse num is: %d\n",rev);
}