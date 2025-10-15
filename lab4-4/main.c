#include <stdio.h>
#include <math.h>

int main()
{
    printf("Enter a and b: ");
    double a, b, h, x, y, sum_y, product_y;
    sum_y = 0;
    product_y = 1;
    scanf("%lf %lf", &a, &b);
    x = a;
    h = 0.1 * (b - a);
    do
    {
        y = atan(x) / (1 + pow(x, 2));
        if (y < 0.4)
        {
            sum_y += y;
        }
        else if (y > 0.4)
        {
            product_y *= y;
        }
        x += h;
    } while (x <= b);
    printf("Sum of y < 0.4: %.4lf\n", sum_y);
    printf("Product of y > 0.4: %.4lf\n", product_y);
    return 0;
}