#include <stdio.h>

int main()
{
    double x1, x2, x3, y1, y2, y3, x, result;
    result = 0.00;
    printf("Enter three x coordinates (x1, x2, x3): ");
    scanf("%lf%lf%lf", &x1, &x2, &x3);
    printf("Enter three y coordinates (y1, y2, y3): ");
    scanf("%lf%lf%lf", &y1, &y2, &y3);
    printf("Enter x value to calculate: ");
    scanf("%lf", &x);
    if ((x1 <= x) && (x <= x2))
    {
        result = y1 + (((x - x1) / (x1 - x2)) * (y1 - y2));
    }
    else if (x == x3)
    {
        result = y3;
    }
    else if ((x2 <= x) && (x <= x3))
    {
        result = y2 + (((x - x2) / (x3 - x2)) * (y3 + y2));
    }
    else
    {
        printf("Error: x is out of range.\n");
        return 1;
    }
    printf("Result: %.2lf\n", result);
    return 0;
}