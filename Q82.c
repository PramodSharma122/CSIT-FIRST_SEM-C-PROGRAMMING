// WAP to input name and age of 10 student in structure and display them using function.

#include<stdio.h>
struct record
{
    int age;
    char name[20];
}rec[2];

void display(struct record [],int);
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("enter your name:");
        scanf("%s",rec[i].name);
        printf("enter your age:");
        scanf("%d",&rec[i].age);
    }
    display(rec,2);
}

void display(struct record rec[],int size)
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("name is: %s\n",rec[i].name);
        printf("age is: %d\n",rec[i].age);
    }
}
