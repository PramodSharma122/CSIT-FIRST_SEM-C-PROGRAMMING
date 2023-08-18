// WAP to input divider,divident and display quotient and remainder.
#include<stdio.h>
void main()
{
    int di,D,q,r;
    printf("enter divident:");
    scanf("%d",&di);
    printf("enter divisior:");
    scanf("%d",&D);
    q=di/D;
    r=di%D;
    printf("quotient is: %d\n",q);
    printf("reminder is: %d\n",r);
}