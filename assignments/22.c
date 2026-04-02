#include <stdio.h>
#include <string.h>
#include <ctype.h>

/*
 * Assignment 22: String Operations Menu Program
 * This program provides a menu-driven interface to perform various string operations
 * using built-in C functions. All operations are beginner-friendly with clear explanations.
 */

int main()
{
    char str1[100], str2[100], result[200];
    int choice;

    printf("=== String Operations Program ===\n");
    printf("This program demonstrates various string operations using built-in C functions.\n\n");

    do
    {
        // Display menu
        printf("\n--- String Operations Menu ---\n");
        printf("1. Find Length of String\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Find Substring\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Reverse String\n");
        printf("9. Exit\n");
        printf("Enter your choice (1-9): ");
        scanf("%d", &choice);

        // Clear input buffer
        getchar();

        switch (choice)
        {
        case 1:
            // Find Length of String
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0'; // Remove newline

            printf("Length of string \"%s\" is: %lu\n", str1, strlen(str1));
            break;

        case 2:
            // Copy String
            printf("Enter a string to copy: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            strcpy(result, str1);
            printf("Original string: \"%s\"\n", str1);
            printf("Copied string: \"%s\"\n", result);
            break;

        case 3:
            // Concatenate Strings
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            strcpy(result, str1);
            strcat(result, str2);

            printf("First string: \"%s\"\n", str1);
            printf("Second string: \"%s\"\n", str2);
            printf("Concatenated result: \"%s\"\n", result);
            break;

        case 4:
            // Compare Strings
            printf("Enter first string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter second string: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            int cmp_result = strcmp(str1, str2);
            printf("First string: \"%s\"\n", str1);
            printf("Second string: \"%s\"\n", str2);

            if (cmp_result == 0)
            {
                printf("Result: Strings are equal\n");
            }
            else if (cmp_result < 0)
            {
                printf("Result: First string comes before second string\n");
            }
            else
            {
                printf("Result: First string comes after second string\n");
            }
            break;

        case 5:
            // Find Substring
            printf("Enter main string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            printf("Enter substring to find: ");
            fgets(str2, sizeof(str2), stdin);
            str2[strcspn(str2, "\n")] = '\0';

            char *substring = strstr(str1, str2);
            printf("Main string: \"%s\"\n", str1);
            printf("Substring to find: \"%s\"\n", str2);

            if (substring != NULL)
            {
                printf("Result: Substring found at position %ld\n", substring - str1);
            }
            else
            {
                printf("Result: Substring not found\n");
            }
            break;

        case 6:
            // Convert to Uppercase
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            strcpy(result, str1);
            for (int i = 0; result[i] != '\0'; i++)
            {
                result[i] = toupper(result[i]);
            }

            printf("Original string: \"%s\"\n", str1);
            printf("Uppercase string: \"%s\"\n", result);
            break;

        case 7:
            // Convert to Lowercase
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            strcpy(result, str1);
            for (int i = 0; result[i] != '\0'; i++)
            {
                result[i] = tolower(result[i]);
            }

            printf("Original string: \"%s\"\n", str1);
            printf("Lowercase string: \"%s\"\n", result);
            break;

        case 8:
            // Reverse String
            printf("Enter a string: ");
            fgets(str1, sizeof(str1), stdin);
            str1[strcspn(str1, "\n")] = '\0';

            int len = strlen(str1);
            for (int i = 0; i < len; i++)
            {
                result[i] = str1[len - 1 - i];
            }
            result[len] = '\0';

            printf("Original string: \"%s\"\n", str1);
            printf("Reversed string: \"%s\"\n", result);
            break;

        case 9:
            // Exit
            printf("Thank you for using the String Operations Program!\n");
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 9.\n");
        }

    } while (choice != 9);

    return 0;
}
