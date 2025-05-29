#include <stdio.h>
#include <conio.h>
#include <graphics.h>

void drawline(int x0, int y0, int x1, int y1) {
    int dx, dy, p, x, y;

    dx = x1 - x0;
    dy = y1 - y0;
    x = x0;
    y = y0;

    p = 2 * dy - dx;

    while (x <x1) {
        if (p >=0) {
          putpixel(x, y, 7); // 7 is the color (white)
          y=y+1;
            p = p + 2 * dy-2*dx;
        } else {
            putpixel(x, y, 7); 
            p = p + 2 * dy;
        }
      x=x+1;
    }
}

void main() {
    int gd = DETECT, gm;
    int x0, y0, x1, y1;

    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    printf("Enter coordinates of 1st point: ");
    scanf("%d %d", &x0, &y0);

    printf("Enter coordinates of 2nd point: ");
    scanf("%d %d", &x1, &y1);

    drawline(x0, y0, x1, y1);

    getch();
    closegraph();
}
