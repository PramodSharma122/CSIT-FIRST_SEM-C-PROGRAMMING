// WAP to input length and breadth of a rectangle and display its area using function.

#include<stdio.h>
int recarea(int,int);
void main()
{
    int l,b,area;
    printf("Enter the length:");
    scanf("%d",&l);
    printf("Enter the breadth:");
    scanf("%d",&b);
    area=recarea(l,b);
    printf("area of ractangle is: %d",area);
    printf("\n");
}
    int recarea(int l,int b)
{
    int area;
    area=l*b;   

}