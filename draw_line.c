#include <stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	line(100,100,200,300);
	getch();
	closegraph();
	
}
