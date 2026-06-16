#include <stdio.h>
#include "calc.h"

int main(void)
{
    printf("3 + 4 = %d\n", add(3, 4));
    printf("10 - 3 = %d\n", subtract(10, 3));
    printf("5 * 6 = %d\n", multiply(5, 6));
    return 0;
}
