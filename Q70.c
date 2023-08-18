// WAP to input 10 number in array and display sum of array using function.

#include<stdio.h>
void sumarray(int [],int);
void main()
{
    int a[10],i;
    printf("enter the number:");
    for (i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    sumarray(a,10);
}

void sumarray(int a[],int size)
{
    int i,sum=0;
    for (i=0;i<size;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d\n",sum);
}