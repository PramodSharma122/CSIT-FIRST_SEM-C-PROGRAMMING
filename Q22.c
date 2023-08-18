// WAP to input a number and display it is prime number or not. 
#include<stdio.h>
void main()
{
    int n,i,c=0;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=2; i<=n-1; i++)
    {
        if(n%i==0)
        {
            c=c+i;
            break;
        }
    }
    if(c==0)
    {
    printf("prime num\n");
    }
    else
    {
        printf("not prime\n");
    }
}