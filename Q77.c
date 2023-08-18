// WAP to input two number and display their sum using structure.

#include<stdio.h>
struct record
{
    int a,b,sum;
};
void main()
{
    struct record rec;
    printf("Enter first number:");
    scanf("%d",&rec.a);
    printf("Enter second number:");
    scanf("%d",&rec.b);
    rec.sum=rec.a+rec.b;
    printf("sum is %d\n",rec.sum);
}