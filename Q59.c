// WAP in c to input 2 numbers and display their sum using function.

#include<stdio.h>
int sumnum(int,int);
void main()
{
    int a,b,sum;
    printf("enter the first number:");
    scanf("%d",&a);
    printf("enter the second number:");
    scanf("%d",&b);
    sum=sumnum(a,b);
    printf("sum is %d",sum);
    printf("\n");
    
}
int sumnum(int a,int b)
{
    int sum;
    sum = a+b;
}