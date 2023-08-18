// WAP to input two number and display smallest number using function.

#include<stdio.h>
void checknum(int,int);
void main()
{
    int a,b;
    printf("enter a first (a) number:");
    scanf("%d",&a);
    printf("enter the second (b) number:");
    scanf("%d",&b);
    checknum(a,b);
}
void checknum(int a,int b)
{
    if(a<b)
    {
        printf("a is smallest\n");
    }
    else
    {
        printf("b is smallest\n");
    }
}