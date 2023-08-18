// WAP to input sale amount from user and provide discount amount based on following:
#include<stdio.h>
void main()
{
    int sa,da;
    printf("please enter sale amount:");
    scanf("%d",&sa);
    if(sa<1000)
    {
        da=sa*0/100;
    }
    else if (sa>=1000 && sa<10000)
    {
        da=sa*10/100;
    }
    else if (sa>=10000 && sa<50000)
    {
        da=sa*15/100;
    }
    else
    {
        da=sa*20/100;
    }
    printf("discount is %d\n",da);
}