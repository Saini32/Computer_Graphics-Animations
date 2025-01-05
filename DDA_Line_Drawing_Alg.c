#include <stdio.h>
#include <graphics.h>
#include <math.h>
#include <stdlib.h> // For abs()

void main() {
    float x, y, x1, y1, x2, y2, dx, dy, step;
    int i, gd = DETECT, gm;

    // Initialize graphics mode
    initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");

    // Input the starting and ending points
    printf("Enter value of x1, y1: ");
    scanf("%f %f", &x1, &y1);

    printf("Enter value of x2, y2: ");
    scanf("%f %f", &x2, &y2);

    // Calculate dx, dy
    dx = fabs(x2 - x1);
    dy = fabs(y2 - y1);

    // Determine the number of steps
    if (dx >= dy)
        step = dx;
    else
        step = dy;

    // Calculate the increment for x and y
    dx = (x2 - x1) / step;
    dy = (y2 - y1) / step;

    // Start plotting the line
    x = x1;
    y = y1;
    i = 1;

    while (i <= step) {
        putpixel((int)x, (int)y, WHITE); // Draw pixel
        x = x + dx; // Increment x
        y = y + dy; // Increment y
        i = i + 1;
        delay(100); // Add a delay for visualization
    }

    getch(); // Wait for user input
    closegraph(); // Close graphics mode
}
