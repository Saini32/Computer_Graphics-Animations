#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
int border_color=WHITE;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
setfillstyle(HATCH_FILL,RED);
circle(250,250,100);
floodfill(250,250,border_color);
getch();
closegraph();
}
