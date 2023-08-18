// Our service:  1.add two number 2.check even or odd 3.exit 
#include<stdio.h>
#include<stdlib.h>

void main()
{
    int ch,a,b,s,n;
    printf("our service\n");
    printf("1.add two num\n");
    printf("2.check even or odd\n");
    printf("3.exit\n");
    printf("enter your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("enter first num:");
            scanf("%d",&a);
            printf("enter second num:");
            scanf("%d",&b);
            s=a+b;
            printf("sum is %d\n",s);
            break;

        case 2:
            printf("enter any num:");
            scanf("%d",&a);
            if(n%2==0)
            {
                printf("this num is even\n");
            }
            else
            {
                printf("this num is odd\n");
            }
            break;

        case 3:
            exit(0);

        default:
            printf("invalid choice\n");
    }
}