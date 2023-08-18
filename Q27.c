// Using while loop d) 2,5,10,17....101
#include<stdio.h>
void main()
{
    int i;
    i=1;
    while(i<=10)
    {
        printf("%d\t",(i*i)+1);
        i++;
    }
    printf("\n");
}