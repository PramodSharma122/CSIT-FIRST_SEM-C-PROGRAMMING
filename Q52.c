// WAP to input 3*3 matrix and display sum of all even number.

#include<stdio.h>
void main()
{
    int a[3][3],sum=0,i,j;
    for(i=0;i<3;i++)
    {
        printf("enter the number: ");
        {
            for(j=0;j<3;j++)
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            if(a[i][j]%2==0)
            sum=sum+a[i][j];
        }
    }
    printf("Sum of even number is: %d ",sum);
    printf("\n");
}