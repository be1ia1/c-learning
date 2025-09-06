// #include "difference_of_squares.h"
#include <stdio.h>

unsigned int sum_of_squares(unsigned int number) {
    unsigned int i, result = 0;
    for (i = 0; i < number + 1; i++) {
        result += i * i;
    }
    return result;
}

unsigned int square_of_sum(unsigned int number) {
    unsigned int i, result = 0;
    for (i = 0; i < number + 1 ; i++) {
        result += i;
    }
    return result * result;
}

unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) - sum_of_squares(number);
}

int main(void) {
    unsigned int number = 10;
    printf("Sum of squares: %u\n", sum_of_squares(number));
    printf("Square of sum: %u\n", square_of_sum(number));
    printf("Difference of squares: %u\n", difference_of_squares(number));
    return 0;
}