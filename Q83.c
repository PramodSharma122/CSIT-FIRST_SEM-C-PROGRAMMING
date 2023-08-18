// WAP to input name,age,salary or a person and display it using union.

#include<stdio.h>
union record
{
    char name[20];
    int age,salary;
}rec;
void main()
{
    printf("enter a name:");
    scanf("%s",rec.name);
    printf("name is %s\n",rec.name);
    printf("enter your age:");
    scanf("%d",&rec.age);
    printf("age is %d\n",rec.age);
    printf("enter your salary:");
    scanf("%d",&rec.salary);
    printf("salary is %d\n",rec.salary);
}