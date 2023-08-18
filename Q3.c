// WAP to input principal,rate,time and display simple intrest.
#include<stdio.h>
void main()
{
    int p,t,r,s;
    printf("enter the principal amount:");
    scanf("%d",&p);
    printf("enter the time period:");
    scanf("%d",&t);
    printf("enter the rate:");
    scanf("%d",&r);
    s=(p*t*r)/100;
    printf("simple intrest is %d\n",s);
    return 0;
}