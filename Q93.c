// WAP to draw circle,ellipse,line,arc,rectangle using graphics.

#include<stdio.h>
#include<graphics.h>
void main()
{
    initwindow(800,900);
    setcolor(RED);
    circle(300,300,50);
    setcolor(BLUE);
    ellipse(250,200,0,360,100,50);
    setcolor(GREEN);
    rectangle(400,350,500,600);
    setcolor(RED);
    line(300,300,500,500);
    setcolor(YELLOW);
    arc(300,200,400,200,100);
    getch();
}