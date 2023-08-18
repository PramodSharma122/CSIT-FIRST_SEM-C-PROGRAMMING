// WAP to input 20 student information (id,name,age,section) from user and save in a file. And also display the same from reading file.

#include<stdio.h>
void main()
{
    char name[20],section[5];
    int id,age,i;
    FILE *fp;
    fp=fopen("abc.txt","w");
    for(i=0;i<3;i++)
    {
        printf("enter your id:");
        scanf("%d",&id);
        printf("enter your name:");
        scanf("%s",name);
        printf("enter your age:");
        scanf("%d",&age);
        printf("enter your section:");
        scanf("%s",section);
        fprintf(fp,"%d\t%s\t%d\t%s\n",id,name,age,section);
    }
    rewind(fp);
    fp=fopen("abc.txt","r");
    while(fscanf(fp,"%d%s%d%s",&id,name,&age,section)!=EOF)
    {
        printf("\n%d\t%s\t%d\t%s",id,name,age,section);
    }
    fclose(fp);
    printf("\n");
}