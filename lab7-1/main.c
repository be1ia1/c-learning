#include <stdio.h>
#include <math.h>

double calculate_t(double x);
double calculate_g(double x);

int main()
{
    double x;
    printf("Enter x: ");
    scanf("%lf", &x);
    if (x <= 0)
    {
        printf("Please, enter x > 0..");
    }
    else
    {
        double answer = calculate_g(x) - 5 * calculate_t(x);
        printf("Answer is: %.2lf", answer);
    }
    return 0;
}

double calculate_t(double x)
{
    return pow(2, x) - 3 * x;
}

double calculate_g(double x)
{
    return log(x / 3);
}