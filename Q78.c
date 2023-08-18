// WAP to input length and breadth of rectangle and display its area using structure.

#include<stdio.h>
struct record
{
    int l,b,a;
};
void main()
{
    struct record rec;
    printf("Enter a length of rectangle:");
    scanf("%d",&rec.l);
    printf("Enter a breadth of rectangle:");
    scanf("%d",&rec.b);
    rec.a=rec.l*rec.b;
    printf("Area of rectangle is %d\n",rec.a);
}