#include <stdio.h>
#include <math.h>

int main() {
    double a, b, c, D, x1, result;
    printf("Enter a, b, c: ");
    scanf("%lf %lf %lf", &a, &b, &c);
    D = (b * b) - (4 * a * c);
    if (D < 0) {
        printf("Roots are missing..");
    }
    else if (D == 0) {
        x1 = -b / (2 * a);
        result = cos(x1);
        printf("Result = %.2lf\n", result);
    }
    else if (D > 0) {
        result = log(fabs(-b/a));
        printf("Result = %.2lf\n", result);
    }
    return 0;
}