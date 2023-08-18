// WAP to input a number and display it is even or odd using function.

#include<stdio.h>
void checknum(int);
void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    checknum(a);
}

void checknum(int a)
{
    if(a%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
}