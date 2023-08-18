/* WAP to input 5 number in an array and ask a user a number to find in that array.if found display its
location in array other wise display 'not found.*/

#include<stdio.h>
int main()
{
    int i,a[5],n;
    for(i=0;i<5;i++)
    {
        printf("enter number:");
        scanf("%d",&a[i]);
    }
        printf("enter user choice number:");
        scanf("%d",&n);
    {    
        for(i=0;i<5;i++)
        if(a[i]==n)
        {
            printf("location is %d\n",i);
            return 0;
            break;
        }
        printf("not found");
    }
}