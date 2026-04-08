#include <stdio.h>

/*
 * Assignment 16: Even and Odd Number Separator
 */

int main()
{
    int totalNumbers;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &totalNumbers);

    int allNumbers[1000];
    int evenNumbers[1000];
    int oddNumbers[1000];

    int evenCount = 0;
    int oddCount = 0;

    printf("Please enter your %d numbers:\n", totalNumbers);
    for (int i = 0; i < totalNumbers; i++)
    {
        scanf("%d", &allNumbers[i]);
    }

    for (int i = 0; i < totalNumbers; i++)
    {

        if (allNumbers[i] % 2 == 0)
        {
            evenNumbers[evenCount] = allNumbers[i];
            evenCount++;
        }
        else
        {
            oddNumbers[oddCount] = allNumbers[i];
            oddCount++;
        }
    }

    printf("\n--- Results ---\n");

    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++)
    {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n");

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++)
    {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    return 0;
}