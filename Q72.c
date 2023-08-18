// WAP to input a number and display its fractorial using Recursive function.

#include<stdio.h>
int fac(int);
void main()
{
    int n,f=1;
    printf("enter a number:");
    scanf("%d",&n);
    f=fac(n);
    printf("fractorial is %d\n",f);
}

int fac(int n)
{
    if(n==1)
    {
        return (1);
    }
    else
    {
        return fac(n-1)*n;
    }
}