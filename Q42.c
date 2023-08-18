// WAP to input 5 number and find how many time 5 is appeored.
#include<stdio.h>
void main()
{
    int a[5],i,c=0;
    printf("Enter the numbers:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)

    if(a[i]==5)
    c++;
    printf("Five is appeored %d times\n",c);

}