// WAP to input name and age of student in structure and display them using function.

#include<stdio.h>
struct record
{
    int age;
    char name[20];
}rec;
void display(struct record);
void main()
{
    printf("enter your name:");
    scanf("%s",rec.name);
    printf("enter your age:");
    scanf("%d",&rec.age);
    display(rec);
}
void display(struct record rec)
{
    printf("name is: %s\n",rec.name);
    printf("age is: %d\n",rec.age);
}