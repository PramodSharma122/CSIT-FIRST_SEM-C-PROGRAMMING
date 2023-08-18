// WAP to input p,t,r and calculate simple intrest using function.

#include<stdio.h>
int si(int,int,int);
void main()
{
    int p,t,r,s;
    printf("enter the principal amount:");
    scanf("%d",&p);
    printf("enter the time:");
    scanf("%d",&t);
    printf("enter the rate:");
    scanf("%d",&r);
    s=si(p,t,r);
    printf("simple intrest is: %d",s);
    printf("\n");

}
int si(int p,int t,int r)
{
    int s;
    s=(p*t*r)/100;
}