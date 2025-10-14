#include <stdio.h>

int main()
{
    printf("Enter four digits number: ");
    int number, digit, result;
    scanf("%d", &number);
    result = 0;
    while (number > 0) {
        digit = number % 10;
        if (digit % 2 == 0) {
            result += digit;
        }
        number /= 10;
    }
    printf("Sum of even digits: %d\n", result);
    return 0;
}