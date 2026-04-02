#include <stdio.h>

/*
 * Assignment 6: Factorial Calculation
 * This program demonstrates two approaches to calculate factorial:
 * 1. Iterative method using a loop
 * 2. Recursive method using function calls
 */

unsigned long long factorial_iterative(int n)
{
    if (n < 0)
        return 0;

    unsigned long long result = 1;
    for (int i = 1; i <= n; i++)
    {
        result = result * i;
    }
    return result;
}

unsigned long long factorial_recursive(int n)
{
    if (n < 0)
        return 0;

    if (n == 0 || n == 1)
        return 1;

    return n * factorial_recursive(n - 1);
}

int main()
{
    int num;

    printf("Enter a positive integer to find its factorial: ");
    scanf("%d", &num);

    if (num < 0)
    {
        printf("Error: Factorial of a negative number doesn't exist.\n");
    }
    else
    {

        printf("\n--- Results ---\n");
        printf("Iterative: %d! = %llu\n", num, factorial_iterative(num));
        printf("Recursive: %d! = %llu\n", num, factorial_recursive(num));
    }

    return 0;
}