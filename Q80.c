// WAP to input id,name,age,address of 2 student and display it using structure.

#include<stdio.h>
struct record
{
    int age,id;
    char name[10],address[20];
}rec[2];
void main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter your id:");
        scanf("%d",&rec[i].id);
        printf("Enter your name:");
        scanf("%s",rec[i].name);
        printf("Enter your age:");
        scanf("%d",&rec[i].age);
        printf("Enter your address:");
        scanf("%s",rec[i].address);
        printf("\n");
    }
    for(i=0;i<2;i++)
    {
    printf("id is: %d\n",rec[i].id);
    printf("name is: %s\n",rec[i].name);
    printf("age is: %d\n",rec[i].age);
    printf("address is: %s\n",rec[i].address);
    printf("\n");
    }
}