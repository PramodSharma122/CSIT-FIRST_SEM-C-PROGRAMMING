// WAP to input two number and display their sum by using pointer.

#include<stdio.h>
void main()
{
    int a,b,s,*x,*y;
    printf("enter a first number:");
    scanf("%d",&a);
    printf("enter a second number:");
    scanf("%d",&b);
    x = &a;
    y = &b;
    s = *x + *y;
    printf("sum is: %d\n",s);
}