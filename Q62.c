// WAP to input age of a person and display he/she elisible for vote or not using function.

#include<stdio.h>
void voteage(int);
void main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    voteage(age);
    
}
void voteage(int age)
{
    if(age>=18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("you can't vote\n");
    }
}