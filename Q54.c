// WAP to input 3*3 matrix and display sum of lower triangular element.

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
            if(a[i]>=a[j])
            sum=sum+a[i][j];
        }
    }
    printf("Sum of lower triangular element is: %d ",sum);
    printf("\n");
}