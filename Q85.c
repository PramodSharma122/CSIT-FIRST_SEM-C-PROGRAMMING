// WAP to input 5 students name,age,address from user and saved in a file name "abc.txt".

#include<stdio.h>
void main()
{
    char name[20],address[20];
    int age,i;
    FILE * fp;
    fp=fopen("abc.txt","w");
    for(i=0;i<5;i++)
    {
    printf("enter your name:");
    scanf("%s",name);
    printf("enter your age:");
    scanf("%d",&age);
    printf("enter your address:");
    scanf("%s",address);
    fprintf(fp, "%s\t%d\t%s\n",name,age,address);
    }
    fclose(fp);
}