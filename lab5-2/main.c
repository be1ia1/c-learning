#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int N;
    printf("Enter number: ");
    scanf("%d", &N);
    int arr[N], i, count_even = 0;
    srand(time(NULL));
    for (i = 0; i < N; i++)
    {
        arr[i] = rand() % 100+1;
    }
    for (i = 0; i < N; i++)
    {
        printf("Current element of array: %d\n", arr[i]);
        if (arr[i] % 2 == 0)
        {
            count_even++;
        }
    }
    printf("Count of even numbers: %d\n", count_even);
    return 0;
}