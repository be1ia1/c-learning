#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, D, x1, x2, result;
    result = 0;
    printf("Enter a, b and c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = pow(b, 2) - 4 * a * c;
    if (D > 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        x2 = (-b - sqrt(D)) / (2 * a);
        result = pow(x1, 2) + pow(x2, 2);
    }
    else if (D == 0)
    {
        x1 = (-b + sqrt(D)) / (2 * a);
        result = pow(x1, 2);
    }
    else
    {
        result = a + b + c;
    }
    printf("Result is: %lf", result);
    return 0;
}