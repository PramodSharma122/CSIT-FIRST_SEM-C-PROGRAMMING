// WAP to input 5 number and display their sum.
#include<stdio.h>
void main()
{
    int a[5],i,sum=0;
    for(i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {
      sum=sum+a[i];
    }
    printf("sum of 5 num is %d\n",sum);
}