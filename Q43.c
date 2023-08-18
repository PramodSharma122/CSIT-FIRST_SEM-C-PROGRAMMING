/* WAP to input 6 number and in an array. split the element into two array one which consist of even
 numbers and one consist of odd number.*/

#include<stdio.h>
void main()
{
    int a[6],i, even[6], odd[6], e=0, o=0;
    printf("Enter the numbers:\n");
    for(i=0;i<6;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==0)
        {
            even[e]=a[i];
            e++;
        }
        else
        {
            odd[o]=a[i];
            o++;
        }
    }
    printf("The even number is:\t");
    for(i=0;i<e;i++)
    {
        printf("%d ",even[i]);
    }
    printf("\n");
    printf("The odd number is:\t");
    for(i=0; i<o; i++)
    {
        printf("%d ", odd[i]);
    }
}