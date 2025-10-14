#include <stdio.h>
#include <math.h>

int main()
{
    int n, k;
    double x, an, result;
    printf("Enter k, x: ");
    scanf("%d %lf", &k, &x);
    result = 0;
    n = k;
    do
    {
        an = pow(-1, n) * (cos(n * x) / pow(n, 2));
        result += an;
        n++;
    } while (fabs(an) >= 0.0001);
    printf("Result: %.4lf\n", result);
    printf("Number of terms: %d\n", n);
    return 0;
}