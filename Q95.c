// WAP to draw a house using graphics.

#include<stdio.h>
#include<conio.h>
#include<graphics.h>
int main()
{
    initwindow(1360,768);
 // Body and Roof
    rectangle(200,300,1100,700);
    line(150,300,1150,300);
    line(150,300,200,200);
    line(1150,300,1100,200);
    line(200,200,1100,200);
 // Window
    rectangle(300,400,450,550);
    line(375,400,375,550);
    line(300,475,450,475);
 // Door
    rectangle(750,400,950,700);
    circle(920,550,10);
    getch();
}
