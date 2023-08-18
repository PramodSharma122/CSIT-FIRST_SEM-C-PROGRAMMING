// WAP to draw of circle using graphics.

#include<stdio.h>
#include <conio.h>
#include<graphics.h>
int main()
{
    initwindow(800,800);
    setcolor(YELLOW);
    circle(300,300,50);
    
    getch();
    return 1;
}
