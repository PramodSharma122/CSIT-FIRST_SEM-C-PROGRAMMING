// WAP to input a number and display it is exactly divisible by 5 and not by 11. 
#include<stdio.h>
void main()
{
    int b;
    printf("please enter any num:");
    scanf("%d",&b);
    if(b%5==0 && b%11!=0)
    {
        printf("it is divisible by 5 and not by 11\n");
    }
    else
    {
        printf("this condition is not satisfied\n");
    }
}