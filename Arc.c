#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
arc(100,100,0,135,50);
getch();
closegraph();
}
