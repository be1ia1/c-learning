#include <stdio.h>

int main()
{
    double x, y;
    printf("Enter coordinates of point X:\n");
    scanf("%lf %lf", &x, &y);
    if ((x * x + y * y < 1) && (x > y) && (x > -y))
    {
        printf("Point is in the area\n");
    }
    else
    {
        printf("Point is not in the area\n");
    }
    return 0;
}