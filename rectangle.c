#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
rectangle(150,120,420,280);
getch();
closegraph();
}
