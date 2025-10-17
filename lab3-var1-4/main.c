#include <stdio.h>

int main()
{
    double x1, x2, x3, y1, y2, y3, x, y;
    printf("Enter x1, x2 and x3: ");
    scanf("%lf %lf %lf", &x1, &x2, &x3);
    printf("Enter y1, y2 and y3: ");
    scanf("%lf %lf %lf", &y1, &y2, &y3);
    printf("Enter x: ");
    scanf("%lf", &x);
    y = 0;
    if (x == x3)
    {
        y = y3;
    }
    else if (x2 <= x && x <= x3)
    {
        y = y2 + ((x1 - x2) / (x3 - x2)) * (y3 - y2);
    }
    else if (x1 <= x && x <= x2)
    {
        y = ((x - x1) / (x2 - x1)) * (y2 - y1);
    }
    printf("Answer is: %lf", y);
    return 0;
}