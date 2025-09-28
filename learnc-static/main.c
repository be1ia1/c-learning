#include <stdio.h>
int sum(int num)
{
    static int result = 0;
    result += num;
    return result;
}

int main()
{
    printf("%d ", sum(55));
    printf("%d ", sum(45));
    printf("%d ", sum(50));
    return 0;
}