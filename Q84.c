// WAP to input name,age,address from user and saved in a file name "abc.txt".

#include<stdio.h>
void main()
{
    char name[20],address[20];
    int age;
    FILE * fp;
    fp=fopen("abc.txt","w");
    printf("enter your name:");
    scanf("%s",name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your address:");
    scanf("%s",address);
    fprintf(fp, "%s %d %s",name,age,address);
    fclose(fp);
}