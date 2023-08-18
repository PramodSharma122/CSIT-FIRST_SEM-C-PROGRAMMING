// WAP to calculate sum of first 10 odd number.
#include<stdio.h>
void main()
{
    int i,sum=0;
    for(i=1;i<20;i++)
    {
        sum=sum+i;
        i=i+1;
    }
    printf("the sum is %d\n",sum);
      
}