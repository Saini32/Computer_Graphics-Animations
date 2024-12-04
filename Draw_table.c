#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
line(150,100,500,100);
line(450,200,500,100);
line(450,200,100,200);
line(100,200,150,100);
line(150,100,150,150);
line(500,100,500,150);
line(450,200,450,300);
line(100,200,100,300);
getch();
closegraph();
}
