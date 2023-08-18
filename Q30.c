// WAP to input a number from user and display palindrome.
#include<stdio.h>
void main()
{
    int n,rem,reversed=0,orginal;
    printf("enter digits number:");
    scanf("%d",&n);
    orginal=n;
    while(n!=0)
    {
        rem=n%10;
        reversed = reversed * 10 + rem;
        n=n/10;
    }
    if(orginal == reversed)
    {
        printf("%d is palindrome.\n",reversed);
    }
    else
    {
        printf("%d is not palindrome.\n",reversed);
    }
}