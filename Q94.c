// WAP to animate circles using graphics.

#include<stdio.h>
#include<graphics.h>
void main()
{
    int i,x,y;
    initwindow(800,900);
    setbgcolor(WHITE);setcolor(RED);
    randomize();
    for(i=0;i<=1000;i++)
    {
        x=rand()%800;
        y=rand()%900;
        circle(x,y,50);
        putpixel(x,y,RED);
        delay(100);
    }
}