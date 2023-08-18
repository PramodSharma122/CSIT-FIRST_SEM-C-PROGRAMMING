// WAP to input age of person and display he is eligible for vote or not.(store answer in a variable).

#include<stdio.h>
#include<string.h>
void main()
{
    int age;
    char eligibility[20];
    printf("Enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        strcpy(eligibility,"Eligible");
    }
    else
    {
        strcpy(eligibility,"Not Eligible");
    }
    printf("%s\n",eligibility);
}