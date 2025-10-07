#include <stdio.h>
#include <stdbool.h>

double max(double a, double b, double c);
bool is_triangle(double a, double b, double c);

int main()
{
    double a, b, c, max_side;
    printf("Enter the lengths of the three sides of the triangle:\n");
    scanf("%lf %lf %lf", &a, &b, &c);
    max_side = max(a, b, c);
    if (max_side == a)
    {
        a = b;
        b = c;
        c = max_side;
    }
    else if (max_side == b)
    {
        b = c;
        c = max_side;
    }
    if (is_triangle(a, b, c))
    {
        printf("Triangle can be formed\n");
        if (c * c == a * a + b * b)
        {
            printf("Right triangle\n");
        }
        else if (c * c < a * a + b * b)
        {
            printf("Acute triangle\n");
        }
        else
        {
            printf("Obtuse triangle\n");
        }
    }
    else
    {
        printf("Triangle cannot be formed\n");
    }
    return 0;
}

double max(double a, double b, double c)
{
    if (a >= b && a >= c)
    {
        return a;
    }
    else if (b >= a && b >= c)
    {
        return b;
    }
    else
    {
        return c;
    }
}

bool is_triangle(double a, double b, double c)
{
    return a + b > c && a + c > b && b + c > a;
}