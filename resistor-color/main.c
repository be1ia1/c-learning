// #include "resistor_color.h"
#include <stdio.h>

typedef enum
{
    BLACK,
    BROWN,
    RED,
    ORANGE,
    YELLOW,
    GREEN,
    BLUE,
    VIOLET,
    GREY,
    WHITE
} resistor_band_t;

int color_code(resistor_band_t user_color)
{
    resistor_band_t color = user_color;
    return color;
}

const resistor_band_t *colors()
{
    static resistor_band_t colors[] = {BLACK, BROWN, RED, ORANGE, YELLOW, GREEN, BLUE, VIOLET, GREY, WHITE};
    return colors;
}

int main(void)
{
    printf("Color code for BLACK: %d\n", color_code(BLACK));
    printf("Color code for WHITE: %d\n", color_code(WHITE));
    const resistor_band_t *color_array = colors();
    printf("Available colors: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", color_array[i]);
    }
    return 0;
}