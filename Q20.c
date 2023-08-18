// WAP to display sum of number from 1 to 100. 
#include<stdio.h>
void main()
{
    int sum=0,i;
    for(i=1; i<=100; i++)
    {
        sum=sum+i;
    }
    printf("sum is %d\n",sum);
}