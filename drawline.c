#include <stdio.h>
#include<conio.h>
#include<graphics.h>

void main() {
	int gd=DETECT,gm;
	clrscr();
	initgraph(&gd,&gm,"C:\\turboc3\\bgi");
	line(320,250,150,250);
	line(150,250,350,250);
	line(320,250,150,250);
	getch();
	closegraph();
	

}
