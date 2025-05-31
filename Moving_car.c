#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <stdlib.h>
#include <dos.h>

void main() {
    int gd = DETECT, gm;
    int i, j = 0;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    outtextxy(25, 240, "Press any key to view the moving car");
  

    for (i = 0; i <= 400; i += 10 , j++) {
        
        
        // Car body
        rectangle(50 + i, 275, 150 + i, 350);
        rectangle(150 + i, 350, 200 + i, 350);
        
        // Wheels
        circle(75 + i, 390, 10);
        circle(175 + i, 390, 10);
        setcolor(j);

        delay(100);
      if(i==400)
        break;
      if(j==15)
        j=2;
      
        cleardevice(); 
    }

    getch();
    closegraph();
}
