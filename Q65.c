// WAP to input three number and display largest number using function.

#include<stdio.h>
void checknum(int,int,int);
void main()
{
    int a,b,c;
    printf("enter the first num:");
    scanf("%d",&a);
    printf("enter the second num:");
    scanf("%d",&b);
    printf("enter the third num:");
    scanf("%d",&c);
    checknum(a,b,c);

}
void checknum(int a,int b,int c)
{
    if(a>b && a>c)
    {
        printf("a is greater\n");
    }
    else if(b>c && b>a)
    {
        printf("b is greater\n");
    }
    else
    {
        printf("c is greater\n");
    }
}