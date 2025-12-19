#include <stdio.h>

int f(int x);

int main()
{
    int x;
    printf("Enter x: ");
    scanf("%d", &x);
    printf("Answer is: %d", f(x));
    return 0;
}

int f(int x)
{
    if (x == 4)
    {
        return 7;
    }
    else if (x > 4)
    {
        return 2 * f(x - 1) - (x * x);
    }
    else
    {
        return 1;
    }
}