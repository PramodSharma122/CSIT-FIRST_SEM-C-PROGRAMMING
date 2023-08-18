// WAP to input number and display it is prime number or not using function.
#include<stdio.h>
void checknum(int);
void main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    checknum(a);

}
void checknum(int a)
{
int c=0,i;
for(i=2;i<a;i++)
{
    if(a%i==0)
    {
        c=c+1;
    }
}
if(c==0)
{
    printf("prime\n");
}
else
{
    printf("not prime\n");
}
}