#include<stdio.h>
#include<conio.h>
#include<graphics.h>
void main()
{
int gd=DETECT,gm;
clrscr();
initgraph(&gd,&gm,"C:\\turboc3\\bgi");
circle(300,200,50);
line(300,50,300,150);
line(300,250,300,350);
line(350,200,450,200);
line(250,200,150,200);
line(338,169,415,90);
line(260,235,196,320);
line(259,175,170,95);
line(338,235,425,315);
getch();
closegraph();
}
