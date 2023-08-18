// WAP to display sum of first 100 natural number using recursive function.

#include<stdio.h>
int sum(int);
void main()
{
    int n,s=0;
    printf("enter a number:");
    scanf("%d",&n);
    s=sum(n);
    printf("sum is %d\n",s);
}

int sum(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return sum(n-1)+n;
    }
}