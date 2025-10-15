#include <stdio.h>

int main()
{
    printf("Enter x: ");
    int sign;
    double x, numerator, denominator, y;
    numerator = 1;
    denominator = 1;
    sign = 0;
    scanf("%lf", &x);
    for (int i = 1; i <= 32; i++)
    {
        if (i % 2 == 0)
        {
            numerator *= (x + i);
        }
        else
        {
            if (sign == 0)
            {
                denominator *= (x - i);
                sign = 1;
            }
            else
            {
                denominator *= (x + i);
                sign = 0;
            }
        }
    }
    printf("Numerator: %.4lf\n", numerator);
    printf("Denominator: %.4lf\n", denominator);
    y = numerator / denominator;
    printf("Answer is: %.4lf\n", y);
    return 0;
}
