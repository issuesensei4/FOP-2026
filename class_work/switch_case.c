#include <stdio.h>
#include <math.h>

int main()
{
    int choice;
    double a, b, result;

    while (1)
    {
        // 1. Clearer Menu Display
        printf("\n--------------------------------\n");
        printf("       SCIENTIFIC CALCULATOR      \n");
        printf("--------------------------------\n");
        printf("1. Addition (+)\n");
        printf("2. Subtraction (-)\n");
        printf("3. Multiplication (*)\n");
        printf("4. Division (/)\n");
        printf("5. Power (a^b)\n");
        printf("6. Factorial (a!)\n");
        printf("7. Exit\n");
        printf("--------------------------------\n");
        printf("Enter your choice: ");

        // Input validation: Ensure user enters a number
        if (scanf("%d", &choice) != 1)
        {
            // Clear the input buffer if non-integer is entered
            while (getchar() != '\n')
                ;
            choice = 0; // Force default case
        }

        // 2. Handle Exit immediately
        if (choice == 7)
        {
            printf("Exiting program. Goodbye!\n");
            break;
        }

        // 3. Context-Aware Input: Ask for numbers based on the operation
        if (choice >= 1 && choice <= 5)
        {
            printf("Enter two numbers (a b): ");
            scanf("%lf %lf", &a, &b);
        }
        else if (choice == 6)
        {
            printf("Enter a number: ");
            scanf("%lf", &a);
        }

        // 4. Operation Logic
        switch (choice)
        {
        case 1:
            printf("Result: %.2lf + %.2lf = %.2lf\n", a, b, a + b);
            break;

        case 2:
            printf("Result: %.2lf - %.2lf = %.2lf\n", a, b, a - b);
            break;

        case 3:
            printf("Result: %.2lf * %.2lf = %.2lf\n", a, b, a * b);
            break;

        case 4:
            if (b != 0)
                printf("Result: %.2lf / %.2lf = %.2lf\n", a, b, a / b);
            else
                printf("Error: Division by zero is undefined.\n");
            break;

        case 5:
            result = pow(a, b);
            printf("Result: %.2lf ^ %.2lf = %.2lf\n", a, b, result);
            break;

        case 6:
            // Check for negative, non-integer, or overflow risk (20! is limit for 64-bit)
            if (a < 0 || (int)a != a)
            {
                printf("Error: Factorial requires a non-negative integer.\n");
            }
            else if (a > 20)
            {
                printf("Error: Result too large for this calculator (Max input: 20).\n");
            }
            else
            {
                unsigned long long fact = 1;
                for (int i = 1; i <= (int)a; i++)
                {
                    fact *= i;
                }
                printf("Result: %d! = %llu\n", (int)a, fact);
            }
            break;

        default:
            printf("Invalid choice! Please try again.\n");
        }
    }

    return 0;
}