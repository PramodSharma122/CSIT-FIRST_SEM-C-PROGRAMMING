// WAP to display first 'n' prime number.
#include<stdio.h>
void main()
{
    int n,num=2,c=0,steps=0,i;
    printf("enter any num:");
    scanf("%d",&n);
    while(steps<n)
    {
        for(i=2;i<num;i++)
        {
            if(num%i==0)
            {
                c++;
                break;
            }
        }
        if(c==0)
        {
            printf("%d\n",num);
            steps++;
        }
        c=0;
        num++;
    }
}