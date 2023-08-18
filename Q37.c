// WAP to input 7 number and display summ of odd number and sum of even number.
#include<stdio.h>
void main()
{
    int a[7],i,oddsum=0,evensum=0;
    for(i=0;i<20;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<7;i++)
    {
        if(a[i]%2==1)
        oddsum=oddsum+a[i];
        else
        evensum=evensum+a[i];
    }
    printf("sum of odd num is %d\n",oddsum);
    printf("sum of even num is %d\n",evensum);
}