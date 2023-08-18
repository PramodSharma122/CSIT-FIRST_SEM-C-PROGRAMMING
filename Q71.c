// WAP to input 10 number in an array and display how many even number are there function.

#include<stdio.h>
void checknum(int [],int);
void main()
{
    int i,a[10];
    printf("enter the number:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    checknum(a,10);
}

void checknum(int a[],int size)
{
    int c=0,i;
    for (i=0;i<size;i++)
    {
        if(a[i]%2==0)
        c++;
    }
    printf("Number of even is %d\n",c);
}