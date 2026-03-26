#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(void) {
    char s1[1024];
    char s2[1024];

    puts("\n== String Operations ==\n");
    puts("You will enter two strings. The program will perform several operations.");

    printf("1) Enter first string: ");
    if (!fgets(s1, sizeof(s1), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    s1[strcspn(s1, "\n")] = '\0';  // remove newline if present

    printf("2) Enter second string: ");
    if (!fgets(s2, sizeof(s2), stdin)) {
        fprintf(stderr, "Error reading input.\n");
        return 1;
    }
    s2[strcspn(s2, "\n")] = '\0';

    // 1. Calculate length of first string
    size_t len1 = strlen(s1);
    printf("\n-- Length of first string --\n");
    printf("String: '%s'\n", s1);
    printf("Length: %zu\n", len1);

    // 2. String reversal of first string
    printf("\n-- Reverse first string --\n");
    printf("Original : '%s'\n", s1);
    printf("Reversed : '");
    for (int i = len1 - 1; i >= 0; i--) {
        putchar(s1[i]);
    }
    puts("'");

    // 3. Equality check of two strings
    printf("\n-- Equality check (first vs second) --\n");
    if (strcmp(s1, s2) == 0) {
        printf("Result: The strings are equal.\n");
    } else {
        printf("Result: The strings are not equal.\n");
    }

    // 4. Palindrome check (first string)
    printf("\n-- Palindrome check (first string) --\n");
    int is_palindrome = 1;
    for (size_t i = 0; i < len1 / 2; i++) {
        if (s1[i] != s1[len1 - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }
    printf("String '%s' is %sa palindrome.\n", s1, is_palindrome ? "" : "not ");

    // 5. Check substring (second string in first string)
    printf("\n-- Substring check --\n");
    printf("Searching for '%s' inside '%s'...\n", s2, s1);
    if (strstr(s1, s2) != NULL) {
        printf("Result: Yes, it is a substring.\n");
    } else {
        printf("Result: No, it is not a substring.\n");
    }

    puts("\nAll operations completed. Thank you!");
    return 0;
}
