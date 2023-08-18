// WAP to input age of a person and display he/she ellisible for vote or not. 
#include<stdio.h>
void main()
{
    int age;
    printf("enter your age:");
    scanf("%d",&age);
    if(age>=18)
    {
        printf("you can vote\n");
    }
    else
    {
        printf("you can't vote\n");
    }
}