#include <stdio.h>
#include <math.h>

/*
 * Assignment 11: Mathematical Operations Calculator
 * This program performs various mathematical operations on a given number:
 * - Square root calculation
 * - Square and cube operations
 * - Prime number checking
 * - Factorial calculation
 * - Prime factorization
 * Demonstrates use of math library functions and custom algorithms.
 */

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int isprime(int n)
{
    if (n <= 1)
    {
        return 0;
    }
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
                return 0;
        }
    }
    return 1;
}

void main()
{

    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Square root of %d is %.2f\n", num, sqrt(num));

    printf("Square of %d is %f\n", num, pow(num, 2));

    printf("Cube of %d is %f\n", num, pow(num, 3));

    if (isprime(num))
    {
        printf("%d is a prime number\n", num);
    }
    else
    {
        printf("%d is not a prime number\n", num);
    }

    printf("Factorial of %d is %d\n", num, factorial(num));

    printf("Prime factors of %d are: ", num);
    for (int i = 2; i <= num; i++)
    {
        if (num % i == 0 && isprime(i))
        {
            printf("%d ", i);
        }
    }
    printf("\n");
}