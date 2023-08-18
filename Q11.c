// WAP to input percentage marks from user and provide division based on follows:
#include<stdio.h>
void main()
{
    int p,d;
    printf("please enter percentage:");
    scanf("%d",&p);
    if(p>=80)
    {
        printf("you got distinction\n");
    }
    else if(p>=70 && p<80)
    {
        printf("you got first division\n");
    }
    else if(p>=60 && p<70)
    {
        printf("you got second division\n");
    }
    else if(p>=50 && p<60)
    {
        printf("you got third division\n");
    }
    else
    {
        printf("no division\n");
    }
}