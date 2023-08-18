// WAP to input a number and display it is exactly divisible by 6 or not. 
#include<stdio.h>
void main()
{
    int a;
    printf("enter any num:");
    scanf("%d",&a);
    if(a%6==0)
    {
        printf("it is exactly divisible by 6\n");
    }
    else
    {
        printf("it is not divisible\n");
    }
}