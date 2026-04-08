#include <stdio.h>
#include <math.h>

int factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    return num * factorial(num - 1);
}

int main()
{

    // Assignment 17
    // To accept the number of terms and find the sum of the sine series

    // Sine series: sin(x) = x - (x^3)/3! + (x^5)/5! - (x^7)/7! + ...

    int n;
    double x, term, sum = 0.0;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    printf("Enter the value of x (in radians): ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++)
    {
        int exponent = 2 * i - 1; // 1, 3, 5, ...
        term = (i % 2 == 1 ? 1 : -1) * (pow(x, exponent) / factorial(exponent));
        sum += term;
    }

    printf("Sum of the sine series: %lf\n", sum);
    return 0;
}