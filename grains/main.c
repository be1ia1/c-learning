// #include "grains.h"
#include <stdio.h>
#include <math.h>
#include <stdint.h>

uint64_t square(uint8_t index)
{
    return pow(2, index - 1);
}

uint64_t total(void)
{
    uint64_t result = 0;
    for (int i = 1; i < 65; i++)
    {
        result += square(i);
    }
    return result;
}

int main(void)
{
    printf("Square of 1: %llu\n", square(1));
    printf("Square of 2: %llu\n", square(2));
    printf("Square of 3: %llu\n", square(3));
    printf("Square of 4: %llu\n", square(4));
    printf("Square of 16: %llu\n", square(16));
    printf("Square of 32: %llu\n", square(32));
    printf("Square of 64: %llu\n", square(64));
    printf("Total grains on board: %llu\n", total());
    return 0;
}