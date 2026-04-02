#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/*
 * Assignment 18: String Operations Program
 * This program performs various string operations on two user-input strings:
 * 1. Calculate string length
 * 2. Reverse a string
 * 3. Check string equality
 * 4. Check if string is a palindrome
 * 5. Check substring presence
 * Demonstrates string manipulation functions from the C standard library.
 */

int main(void)
{
    char s1[1024];
    char s2[1024];

    puts("\n== String Operations ==\n");
    puts("You will enter two strings. The program will perform several operations.");

    printf("1) Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin))
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    s1[strcspn(s1, "\n")] = '\0';

    printf("2) Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin))
    {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    s2[strcspn(s2, "\n")] = '\0';

    size_t len1 = strlen(s1);
    printf("\n-- Length of first string --\n");
    printf("String: '%s'\n", s1);
    printf("Length: %zu\n", len1);

    printf("\n-- Reverse first string --\n");
    printf("Original : '%s'\n", s1);
    printf("Reversed : '");
    for (int i = len1 - 1; i >= 0; i--)
    {
        putchar(s1[i]);
    }
    puts("'"); // Add closing quote and newline

    printf("\n-- Equality check (first vs second) --\n");
    if (strcmp(s1, s2) == 0)
    {
        printf("Result: The strings are equal.\n");
    }
    else
    {
        printf("Result: The strings are not equal.\n");
    }

    printf("\n-- Palindrome check (first string) --\n");
    int is_palindrome = 1;
    for (size_t i = 0; i < len1 / 2; i++)
    {
        if (s1[i] != s1[len1 - 1 - i])
        {
            is_palindrome = 0;
            break;
        }
    }
    printf("String '%s' is %sa palindrome.\n", s1, is_palindrome ? "" : "not ");

    printf("\n-- Substring check --\n");
    printf("Searching for '%s' inside '%s'...\n", s2, s1);
    if (strstr(s1, s2) != NULL)
    {
        printf("Result: Yes, it is a substring.\n");
    }
    else
    {
        printf("Result: No, it is not a substring.\n");
    }

    puts("\nAll operations completed. Thank you!");
    return 0;
}
