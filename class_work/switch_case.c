#include <stdio.h>

int main()
{
    float a, b, Result;
    int choice;

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    printf("\nChoose operation:\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
        Result = a + b;
        printf("Result = %f", Result);
        break;

    case 2:
        Result = a - b;
        printf("Result = %f", Result);
        break;

    case 3:
        Result = a * b;
        printf("Result = %f", Result);
        break;

    case 4:
        if (b != 0)
        {
            Result = a / b;
            printf("Result = %f", Result);
        }
        else
        {
            printf("Division by zero is not allowed");
        }
        break;

    default:
        printf("Invalid choice");
    }

    return 0;
}
