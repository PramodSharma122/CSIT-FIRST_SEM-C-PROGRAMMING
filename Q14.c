// WAP to input a number and display it for 20 time. 
#include<stdio.h>
void main()
{
    int n,i;
    printf("enter a num:");
    scanf("%d",&n);
    for(i=1; i<=20; i++)
    {
        printf("%d\t",n);
    }
    printf("\n");
}