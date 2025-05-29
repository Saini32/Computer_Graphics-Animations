#include <graphics.h>
#include <conio.h>
#include <stdlib.h>
#include <time.h>

void main() {
    int gd = DETECT, gm;
    int col = 400, row = 640,font=4, direction =2;// Adjust based on your screen size
    int size = 8, color = 15;
    clrscr();


    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");
    cleardevice();

    while (!kbhit()) {
        settextstyle(random(font),  random(direction) + random(size)); // Random style, direction, and size
        setcolor(random(color));                          // Random color (1–15)
        outtextxy(random(col), random(row), "Welcome Sneha"); // Random position
        delay(250); // Delay for 250ms
    }

    getch();
    closegraph();
}
