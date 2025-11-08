#include <stdio.h>

int main()
{
    double arr[10] = {0.1, -27.3, 35.7, -71.4, 0, 12, -5, -7.3, 0.5, 14};
    int positive = 0, negative = 0;
    int lenght = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < lenght; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
    }
    if (positive > negative)
    {
        printf("More positive! :)");
    }
    else if (positive < negative)
    {
        printf("More negative.. :(");
    }
    else
    {
        printf("Draw!");
    }
    return 0;
}