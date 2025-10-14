#include <stdio.h>

int main() {
    int number, digit1, digit7;
    printf("Enter seven digitals number: ");
    scanf("%d", &number);
    digit1 = number / 1000000;
    digit7 = number % 10;
    printf("Sum of first %d and last %d is %d", digit1, digit7, digit1 + digit7);
    return 0;
}