#include <iostream>
#include <graphics.h>
#include <cmath>
#include <algorithm>
#include <conio.h>

using namespace std;

int main()
{
    int x1, y1, x2, y2;

    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    initwindow(800, 600, "DDA Line Drawing Algorithm");

    int dx = x2 - x1;
    int dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    float xIncrement, yIncrement;
    float x = x1, y = y1;

    if (steps == 0)
    {
        putpixel(x1, y1, WHITE);
    }
    else
    {
        xIncrement = (float)dx / steps;
        yIncrement = (float)dy / steps;

        for (int i = 0; i <= steps; i++)
        {
            putpixel(round(x), round(y), WHITE);

            x = x + xIncrement;
            y = y + yIncrement;
        }
    }

    setcolor(YELLOW);
    outtextxy(10, 10, "DDA Line Drawing Algorithm");

    getch();
    closegraph();

    return 0;
}