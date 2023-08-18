/* WAP to input two word and display.
    . They are equal or not.
    . show by combining them. */

#include<stdio.h>
#include<string.h>
void main()
{
    char w1[20],w2[20];
    printf("Enter first word:");
    scanf("%s",w1);
    printf("Enter second word:");
    scanf("%s",w2);
    if(strcmp(w1,w2)==0)
    {
        printf("word are same\n");
    }
    else
    {
        printf("word are not same\n");
    }
    printf("combine words is %s\n",strcat(w1,w2));
} 