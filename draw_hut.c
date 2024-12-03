#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
rectangle(100,200,400,350);
rectangle(250,300,300,350);
line(255,60,400,200);
line(255,60,100,200);
getch();
closegraph();
}
