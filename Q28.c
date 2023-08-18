// WAP to input a number from user and display sum of digits.
#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("enter a num:");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits is: %d\n",sum);
}