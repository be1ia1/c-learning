#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, z;
    z = 0;
    printf("Enter x and y: ");
    scanf("%lf %lf", &x, &y);
    if (x < 0)
    {
        z = fmin(fmin(x, y), pow(y + x, -3));
    }
    else
    {
        z = fmax(x + y, 2 * y);
    }
    printf("Result is: %lf", z);
    return 0;
}