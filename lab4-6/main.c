#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, Y, S, x;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("x        S(x)      Y(x)      Iterations\n");
    printf("------------------------------------------\n");
    x = a;
    while (x <= b)
    {
        Y = cosh(x);
        int n = 0;
        double term = 1.0;
        S = 1.0;
        while (fabs(term) >= 0.0001)
        {
            term = term * x * x / ((2 * n + 1) * (2 * n + 2));
            S += term;
            n++;
        }
        printf("%.2lf     %.4lf    %.4lf    %d\n", x, S, Y, n);
        x += 0.1;
    }

    return 0;
}