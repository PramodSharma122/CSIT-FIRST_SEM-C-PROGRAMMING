/* WAP to input a name from user and display.
    . length of name
    . its reverse
    . name of upper case
    . name of lower case  */

# include<stdio.h>
# include<string.h>
void main()
{
    char name[20];
    printf("enter a name:");
    gets(name);
    printf("length of name is %d\n",strlen(name));
    printf("Name in uppercase is %s\n",strupr(name));
    printf("Name in lowercase is %s\n",strlwr(name));
    printf("Name in reverse order is %s\n",strrev(name));
}