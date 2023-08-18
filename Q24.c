// WAP to display number using while loop. a) 2,4,6,...200
#include<stdio.h>
void main()
{
    int i;
    i=2;
    while(i<=200)
    {
        printf("%d\t",i);
        i=i+2;
    }
    printf("\n");
}