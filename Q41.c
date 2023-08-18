// WAP to input 5 number in array and display its reverse.
#include<stdio.h>
void main()
{
    int a[5],i;
    printf("Enter the number:\n");
    for(i=0;i<5;i++)
    scanf("%d",&a[i]);  
    printf("reverse number is:\n");
    for(i=4;i>=0;i--)
    printf("%d\n",a[i]);
}