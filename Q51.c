// WAP to input 3*3 matrix and display sum of all element in the matrix.

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
            sum=sum+a[i][j];
        }
    }
    printf("Sum of matrix element is: %d ",sum);
    printf("\n");
}
