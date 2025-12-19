#include <stdio.h>
#include <math.h>

double solve_quadratic(double A, double B, double C);

int main()
{
    double v1, a1, v2, a2, A, B, C;
    printf("Enter v1 a1: ");
    scanf("%lf %lf", &v1, &a1);
    printf("\n");
    printf("Enter v2 a2: ");
    scanf("%lf %lf", &v2, &a2);
    A = (a2 - a1) / 2;
    B = v2 - v1;
    C = 0;
    printf("Answer is: %.2lf", solve_quadratic(A, B, C));
    return 0;
}

double solve_quadratic(double A, double B, double C)
{
    double D = pow(B, 2) - 4 * A * C;
    double x1 = (-B + sqrt(D)) / (2 * A);
    double x2 = (-B - sqrt(D)) / (2 * A);
    if (x1 == 0)
    {
        return x2;
    }
    else
    {
        return x1;
    }
}