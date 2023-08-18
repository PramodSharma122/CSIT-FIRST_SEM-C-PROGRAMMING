// WAP in c to input length and breadth of rectangle and display it's area.
#include<stdio.h>
void main()
{
    int l,b,a;
    printf("enter length:");
    scanf("%d",&l);
    printf("enter breadth:");
    scanf("%d",&b);
    a=l*b;
    printf("area of ractangle is %d\n",a);
}