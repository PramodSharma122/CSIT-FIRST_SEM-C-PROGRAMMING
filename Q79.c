// WAP to input id,name,age,address of a student and display it using structure.

#include<stdio.h>
struct record
{
    int id,age;
    char name[20],address[20];
};
void main()
{
struct record rec;

    printf("Enter your id please:");
    scanf("%d",&rec.id);
    printf("Enter your name:");
    scanf("%s",rec.name);
    printf("Enter your age:");
    scanf("%d",&rec.age);
    printf("Enter your address:");
    scanf("%s",rec.address);

    
    printf("id is: %d\n",rec.id);
    printf("name is: %s\n",rec.name);
    printf("age is: %d\n",rec.age);
    printf("address is: %s\n",rec.address);

}