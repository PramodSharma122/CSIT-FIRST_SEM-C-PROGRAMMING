// WAP to input two 3*3 matrix and display subtract of the matrix.

#include<stdio.h>
void main()
{
    int A[3][3],B[3][3],sub[3][3],i,j;
    printf("Enter the first matrix:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            scanf("%d",&A[i][j]);
        }
    }

    printf("Enter the second matrix:\n");
    {
        for(i=0;i<3;i++)
        {
            for(j=0;j<3;j++)
            scanf("%d",&B [i][j]);
        }
    }

    printf("The subtract of two matrix is:\n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            sub[i][j]=A[i][j]-B[i][j];
        }
    }

    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("%d ",sub[i][j]);
        }
        printf("\n");
    }    
}