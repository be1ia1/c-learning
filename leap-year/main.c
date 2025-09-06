#define _SECURE_NO_WARNINGS
#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdbool.h>
// #include "leap.h"

bool leap_year(int year)
{
    if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main(void)
{
    int years[] = {1999, 2023, 2024, 1996, 2000, 1900, 2004, 2100, 2400};
    for (int i = 0; i < sizeof(years) / sizeof(years[0]); i++)
    {
        int year = years[i];
        if (leap_year(year))
        {
            printf("%d is a leap year.\n", year);
        }
        else
        {
            printf("%d is not a leap year.\n", year);
        }
    }
    return 0;
}