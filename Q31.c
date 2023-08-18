// WAP to input a number from user and display armstrong of digits.
#include<stdio.h>
void main()
{
    int n,orginal,rem,arm=0;
    printf("enter digits number:");
    scanf("%d",&n);
    orginal=n;
    while(orginal!=0)
    {
        rem=orginal%10;
        arm = rem*rem*rem + arm;
        orginal=orginal/10;
    }
    if(arm == n)
    {
        printf("%d is a armstrong.\n",arm);
    }
    else
    {
        printf("%d is not armstrong.\n",arm);
    }
}