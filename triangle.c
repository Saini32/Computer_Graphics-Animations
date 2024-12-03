#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
line(200,100,100,250);
line(100,250,370,250);
line(200,100,370,250);
getch();
closegraph();
}
