// WAP to input id,name and address and saved in a file using structure.

#include<stdio.h>
struct Record
{
    int id;
    char name[20],address[20];
}rec;
void main()
{
    FILE *fp;
    fp=fopen("abc.txt","w");
    printf("enter your id:");
    scanf("%d",&rec.id);
    printf("enter your name:");
    scanf("%s",rec.name);
    printf("enter your address:");
    scanf("%s",rec.address);
    fwrite(&rec,sizeof(struct Record),1,fp);
    fclose(fp);
}