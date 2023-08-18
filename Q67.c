// WAP to input a digits number and display sum of digits using function.
#include<stdio.h>
void sumdigits(int);
void main()
{
    int n;
    printf("enter a digits number:");
    scanf("%d",&n);
    sumdigits(n);
}
void sumdigits(int n)
{
    int sum=0,r;
    while(n>0)
    {
        r=n%10;
        sum=sum+r;
        n=n/10;
    }
    printf("sum of digits is %d\n",sum);
}