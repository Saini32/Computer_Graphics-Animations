#include<stdio.h>
#include<conio.h>
#includ<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
circle(300,200,40);
getch();
closegraph();
}
