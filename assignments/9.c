#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

// Assignment 9 : Armstrong number

void main()
{

    int num, temp, sum;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;
    sum = 0;

    while (temp > 0)
    {
        int digit = temp % 10;
        sum += digit * digit * digit;
        temp /= 10;
    }

    if (sum == num)
    {
        printf("%d is an Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
}
