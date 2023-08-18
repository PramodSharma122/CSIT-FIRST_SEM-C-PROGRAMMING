// Calculation service 1. compare the number 2. multiply two number 3. exit 
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int ch,a,b,m;
    printf("calculation service\n");
    printf("1.compare the num\n");
    printf("2.multiply two num\n");
    printf("3.exit\n");
    printf("your choice:");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
        printf("enter first num 'a':");
        scanf("%d",&a);
        printf("enter second num 'b':");
        scanf("%d",&b);
        if(a>b)
        {
            printf("a is largest\n");
        }
        else
        {
            printf("b is largest\n");
        }
        break;

        case 2:
        printf("enter first num:");
        scanf("%d",&a);
        printf("enter second num:");
        scanf("%d",&b);
        m=a*b;
        printf("multiply is %d\n",m);
        break;

        case 3:
        exit(0);
        default:
        printf("invalid choice\n");
    }
}