#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

void bubble_sort(int arr[], int size);
void swap(int *xp, int *yp);

int main()
{
    int N, i, j, k;
    printf("Enter matrix size: ");
    scanf("%d", &N);

    int array[N][N], b[N * N], answer[N][N];
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
            array[i][j] = rand() % 100 + 1;
    }

    printf("Generated matrix:\n");
    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
            printf("%3d", array[i][j]);
    }
    printf("\n");

    // convert to one-dimensional
    k = 0;
    for (i = 0; i < N; i++)
    {
        for (j = 0; j < N; j++)
        {
            b[k] = array[i][j];
            k++;
        }
    }

    // print one-dimensional (not sorted)
    for (i = 0; i < N * N; i++)
    {
        printf("%2d ", b[i]);
    }

    bubble_sort(b, sizeof(b) / sizeof(b[0]));

    printf("\n");
    // print one-dimensional (sorted)
    for (i = 0; i < N * N; i++)
    {
        printf("%2d ", b[i]);
    }

    printf("\n");
    // k = 0;
    // for (int j = 0; j < N; j++)
    // {
    //     if (j % 2 == 0)
    //     {
    //         for (int i = 0; i < N; i++)
    //         {
    //             answer[i][j] = b[k];
    //             k++;
    //         }
    //     }
    //     else
    //     {
    //         for (int i = N - 1; i >= 0; i--)
    //         {
    //             answer[i][j] = b[k];
    //             k++;
    //         }
    //     }
    // }

    k = 0;
    for (int i = 0; i < N; i++)
    {
        if (i % 2 == 0)
        {
            for (j = 0; j < N; j++)
            {
                answer[i][j] = b[k];
                k++;
            }
            
        }
        else
        {
            for (j = N - 1; j >= 0; j--)
            {
                answer[i][j] = b[k];
                k++;
            }
        }
    }
    

    printf("Snaked matrix:\n");
    for (i = 0; i < N; i++)
    {
        printf("\n");
        for (j = 0; j < N; j++)
            printf("%3d", answer[i][j]);
    }
    printf("\n");

    return 0;
}

void bubble_sort(int arr[], int size_arr)
{
    int i, j;
    bool swapped;
    for (i = 1; i < size_arr - 1; i++)
    {
        swapped = false;
        for (j = 0; j < size_arr - i; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                swap(&arr[j], &arr[j + 1]);
                swapped = true;
            }
        }
        if (swapped == false)
        {
            break;
        }
    }
}

void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}