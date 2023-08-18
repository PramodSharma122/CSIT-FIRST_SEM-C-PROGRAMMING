// WAP to input a number and display palindrome using function.

#include<stdio.h>
void palin(int);
void main()
{
    int n;
    printf("enter a digits:");
    scanf("%d",&n);
    palin(n);
}
void palin(int n)
{
    int r,rev=0,orginal;
    orginal=n;
    while(n!=0)
    {
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    if(orginal==rev)
    {
        printf("%d is palindrome\n",rev);
    }
    else
    {
        printf("%d is not palindrome\n",rev);
    }
}