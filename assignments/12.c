#include <stdio.h>
#include <stdlib.h>

/*
 * Assignment 12: GCD and SCD Calculator
 * This program calculates:
 * - GCD (Greatest Common Divisor): Largest number that divides both numbers
 * - SCD (Smallest Common Divisor): Smallest number > 1 that divides both numbers
 */

int scd_calc(int num1, int num2)
{
    int is_scd_found = 0;
    int min_value = (num1 < num2) ? num1 : num2;
    int scd = 2;

    while (scd <= min_value)
    {
        if (num1 % scd == 0 && num2 % scd == 0)
        {
            is_scd_found = 1;
            break;
        }
        scd++;
    }

    if (!is_scd_found)
        scd = 1;

    return scd;
}

int gcd_calc(int num1, int num2)
{
    int max_value = (num1 > num2) ? num1 : num2;
    int gcd = max_value;

    while (gcd > 1)
    {
        if (num1 % gcd == 0 && num2 % gcd == 0)
            break;
        gcd--;
    }

    return gcd;
}

int main()
{
    int num1, num2, choice;
    int scd_value, gcd_value;

    printf("Enter number 1: ");
    scanf("%d", &num1);

    printf("Enter number 2: ");
    scanf("%d", &num2);

    num1 = abs(num1);
    num2 = abs(num2);

    printf("\n1. SCD\n2. GCD\n3. Both\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        scd_value = scd_calc(num1, num2);
        printf("SCD = %d\n", scd_value);
        break;

    case 2:
        gcd_value = gcd_calc(num1, num2);
        printf("GCD = %d\n", gcd_value);
        break;

    case 3:
        scd_value = scd_calc(num1, num2);
        gcd_value = gcd_calc(num1, num2);
        printf("SCD = %d\n", scd_value);
        printf("GCD = %d\n", gcd_value);
        break;

    default:
        printf("Invalid Choice\n");
    }

    return 0;
}