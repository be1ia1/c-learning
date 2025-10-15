#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter x and y: ");
    double x, y, Z;
    scanf("%lf%lf", &x, &y);
    if (x < 0)
        Z = sin(fmin(x, y));
    else if (x >= 0)
        Z = cos(fmax(x, y));        
    printf("Z= %.2lf\n", Z);
    return 0;
}
