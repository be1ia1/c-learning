#include <stdio.h>
#include <stdlib.h>
#include <time.h>

double my_min(double arr[], int size);

int main()
{
    double array[15];
    srand(time(NULL));
    for (int i = 0; i < 15; i++)
    {
        array[i] = rand() % 100+1;
    }

    // printf("Array to calculate\n");
    // printf("--------------------------------------------------------------------------------------------------------------------\n");
    // for (int i = 0; i < 15; i++)
    // {
    //     printf("%.2lf", array[i]);
    //     if (i < 14) {
    //         printf(" | ");
    //     }
    // }
    // printf("\n");
    // printf("--------------------------------------------------------------------------------------------------------------------\n");

    double arg3[2] = {array[2] + 5, array[3]};
    double array_to_compare[4] = {
        array[0],
        array[1] + array[4],
        my_min(arg3, 2),
        array[7] - array[8]};

    // printf("Array to compare\n");
    // printf("--------------------------------------------------------------------------------------------------------------------\n");
    // for (int i = 0; i < 5; i++)
    // {
    //     printf("%.2lf", array_to_compare[i]);
    //     if (i < 4) {
    //         printf(" | ");
    //     }
    // }
    // printf("\n");
    // printf("--------------------------------------------------------------------------------------------------------------------\n");
    printf("Answer is: %.2lf", my_min(array_to_compare, 4));
    return 0;
}


double my_min(double arr[], int size_arr)
{
    double current_min = arr[0];
    for (int i = 1; i < size_arr; i++)
    {
        if (arr[i] < current_min)
        {
            current_min = arr[i];
        }
    }
    return current_min;
}