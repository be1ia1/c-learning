#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, x, y;
    printf("Enter a and b: ");
    scanf("%lf %lf", &a, &b);
    printf("Enter N: ");
    int N;
    scanf("%d", &N);
    double h = (b - a) / N;
    for (x = a; x <= b; x += h)
    {
        printf("Result at x=%.2lf: y=%.2lf\n", x, exp(-x));
    }
    return 0;
}
