// WAP to delete Record "hari" from following file.

#include<stdio.h>
void main()
{
    int age,id;
    char name[20],section[5];
    FILE *fr,*fw;
    fr=fopen("abc.txt","r");
    fw=fopen("abcd.txt","w");
    while(fscanf(fr,"%d%s%d%s",&id,name,&age,section)!=EOF)
    {
        if(strcmp(name,"hari")==0)
        continue;
        fprintf(fw,"%d\t%s\t%d\t%s\n",id,name,age,section);
    }
    fclose(fr);
    fclose(fw);
    remove("abc.txt");
    rename("abcd.txt","abc.txt");
}