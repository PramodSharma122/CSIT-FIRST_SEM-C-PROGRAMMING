// WAP to input two 3*3 matrix and display multiplication of the matrix.

#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],C[3][3],i,j,k;
    printf("Enter the first matrix element A:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
        }
    }
    printf("Enter the second matrix element B:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            scanf("%d",&B[i][j]);
        }
    }
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            C[i][j]=0;
            for(k=0;k<3;k++)
            {
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
            }
        }
    }
    printf("product of matrix is:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            {
                printf("%d ",C[i][j]);
            }
            printf("\n");
        }
    }
}