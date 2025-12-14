#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int row = 3, col = 4;
    int array[row][col];

    srand(time(NULL));
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
            array[i][j] = rand() % 100 + 1;
    }

    printf("Generated matrix:\n");
    for (int i = 0; i < row; i++)
    {
        printf("\n");
        for (int j = 0; j < col; j++)
            printf("%3d", array[i][j]);
    }
    printf("\n");

    int max_value = array[0][0];
    int max_row_index = 0;

    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if (max_value < array[i][j])
            {
                max_value = array[i][j];
                max_row_index = i;
            }
        }
    }
    printf("\n");
    printf("Row with max element: ");
    for (int j = 0; j < col; j++)
    {
        printf("%2d ", array[max_row_index][j]);
    }

    return 0;
}