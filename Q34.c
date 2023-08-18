// WAP to display following series: 1,2,3,4,7,8,9,10.
#include<stdio.h>
void main()
{
    int i;
    for(i=1;i<=10;i++)
    {
        if(i==5||i==6)
        {
            continue;
        }
        printf("%d\t",i);
    }
    printf("\n");
}