#include <stdio.h>

int main() {
    printf("Enter number with four digits: ");
    int num;
    scanf("%d", &num);
    int digit1 = (num / 1000) % 10;
    int digit2 = (num / 100) % 10;
    printf("Sum of first two digits: %d\n", digit1 + digit2);
    return 0;
}