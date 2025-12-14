#include <stdio.h>

int main()
{
    double array[4][4] = {
        {3.97, 4.89, 11.17, 5.67},
        {-7.52, -11.67, -5.8, 4.12},
        {15.96, 12.9, -14.2, 8.5},
        {11.7, -4.5, 2.94, 2.17}};
    for (int i = 0; i <= 3; i++)
    {
        double multi_row = 1;
        for (int j = 0; j <= 3; j++)
        {
            if (array[i][j] != 0)
            {
                multi_row *= array[i][j];
            }
        }
        printf("Answer is: %.2f\n", multi_row);
    }

    return 0;
}