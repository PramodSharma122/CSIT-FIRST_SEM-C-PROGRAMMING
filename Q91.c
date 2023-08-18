// WAP to display id,name and address from reading a file named "year.txt".

#include<stdio.h>
struct Record
{
    int id;
    char name[20],address[20];
}rec;
void main()
{
    printf("\n");
    FILE *fp;
    fp=fopen("year.txt","r");
    while(fread(&rec,sizeof(struct Record),1,fp)==1)
    {
        printf("id is: %d\n",rec.id);
        printf("name is: %s\n",rec.name);
        printf("address is: %s\n",rec.address);
        printf("\n");
    }
    printf("\n");
    fclose(fp);
}