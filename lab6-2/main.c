#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N = 3, array[N][N], i, j, minor_matrix[2][2], det = 0;

    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            array[i][j] = rand() % 10 + 1;
    }

    printf("\n");
    printf("Generated matrix:");
    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
            printf("%3d", array[i][j]);
    }
    printf("\n");

    int target_col = 2;
    for (int target_row = 0; target_row < N; target_row++)
    {
        // sign
        int sign = 1;
        if ((target_col + target_row) % 2 == 0)
        {
            sign = 1;
        }
        else
        {
            sign = -1;
        }

        // element
        int element = array[target_row][target_col];

        // minor
        int mi = 0;
        for (int i = 0; i < N; i++)
        {
            if (i == target_row)
            {
                continue;
            }
            int mj = 0;
            for (j = 0; j < N; j++)
            {
                if (j == target_col)
                {
                    continue;
                }
                minor_matrix[mi][mj] = array[i][j];
                mj++;
            }
            mi++;
        }
        int minor_det = (minor_matrix[0][0] * minor_matrix[1][1]) - (minor_matrix[0][1] * minor_matrix[1][0]);

        det += sign * element * minor_det;
    }

    printf("%3d", det);
    return 0;
}