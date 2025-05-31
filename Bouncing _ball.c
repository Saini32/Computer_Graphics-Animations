#include <stdio.h>
#include <conio.h>
#include <graphics.h>
#include <dos.h>
#include <stdlib.h>

void main() {
    int gd = DETECT, gm;
    int x, y, flag =0, 1;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");  // Path to graphics driver
    x = getmaxx() / 2;
    y = 30;

    while (!kbhit()) {
        // Reverse direction if the ball reaches top or bottom
        if (y >= getmaxy() - 30 || y <= 30)
            flag = !flag;

        setcolor(RED);
        setfillstyle(SOLID_FILL, RED);
        circle(x, y, 30);           // Draw the ball
        floodfill(x, y, RED);       // Fill the ball
        delay(25);                  // Wait a little
        cleardevice();              // Clear screen

        if (flag)
            y += 2;  // Move down
        else
            y -= 2;  // Move up
    }

    getch();
    closegraph();
}
