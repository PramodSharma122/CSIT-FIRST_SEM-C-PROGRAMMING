// WAP to input a number and display its factorial by using pointer.

#include<stdio.h>
void main()
{
    int n,*m,f=1,i;
    printf("enter a number:");
    scanf("%d",&n);
    m=&n;
    for(i=1;i<=*m;i++)
    {
        f=f*i;
    }
    printf("factorial is %d\n",f);
}