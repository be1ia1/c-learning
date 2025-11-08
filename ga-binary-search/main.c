#include <stdio.h>


int main()
{
    int number;
    printf("Enter number to guess: ");
    scanf("%d", &number);
    int array[5] = {1, 3, 5, 7, 9};
    int low = 0;
    int length = sizeof(array) / sizeof(array[0]);
    int high = length - 1;
    while (low <= high)
    {
        int mid = (low + high) / 2;
        int guess = array[mid];
        if (guess == number)
        {
            printf("Position is: %d", mid);
            return 0;
        }
        else if (guess > number)
        {
            high = mid - 1;
        }
        else
        {
            low = mid + 1;
        }
    }
    return 1;    
}
