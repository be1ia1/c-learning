#include <stdio.h>

int main()
{
    float x, y;
    printf("Enter x and y: \n");
    scanf("%f %f", &x, &y);
    if ((x * x + y * y >= 1) && (x * x + y * y <= 4) && (y >= 0) && (x <= 0))
    {
        printf("Point in the area");
    }
    else
    {
        printf("Point is out of the area");
    }
    return 0;
}