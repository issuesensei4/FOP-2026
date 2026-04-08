#include <stdio.h>

/*
 * Assignment 14: Binary to Decimal Converter
 */

int main()
{
    int binary, decimal = 0;
    int base = 1;
    int remainder;

    printf("Enter a binary number: ");
    scanf("%d", &binary);

    while (binary > 0)
    {
        remainder = binary % 10;
        decimal = decimal + remainder * base;
        binary = binary / 10;
        base = base * 2;
    }

    printf("Decimal = %d\n", decimal);

    return 0;
}
