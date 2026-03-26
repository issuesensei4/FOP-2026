#include <stdio.h>

int main() {
    // Step 1: Ask the user how many numbers they want to check
    int totalNumbers;
    printf("How many numbers do you want to enter? ");
    scanf("%d", &totalNumbers);

    // Create arrays (like empty boxes) to hold our data. 
    // We set a maximum limit of 1000 numbers.
    int allNumbers[1000];
    int evenNumbers[1000];
    int oddNumbers[1000];

    // Keep a running tally of how many even and odd numbers we find
    int evenCount = 0;
    int oddCount = 0;

    // Step 2: Collect all the numbers from the user
    printf("Please enter your %d numbers:\n", totalNumbers);
    for (int i = 0; i < totalNumbers; i++) {
        scanf("%d", &allNumbers[i]);
    }

    // Step 3: Sort the numbers into "even" and "odd" buckets
    for (int i = 0; i < totalNumbers; i++) {
        
        // The '%' symbol gives us the remainder of a division.
        // If dividing by 2 leaves a remainder of 0, the number is even.
        if (allNumbers[i] % 2 == 0) {
            evenNumbers[evenCount] = allNumbers[i];
            evenCount++; // Increase our tally of even numbers by 1
        } 
        // If it's not even, it must be odd.
        else {
            oddNumbers[oddCount] = allNumbers[i];
            oddCount++; // Increase our tally of odd numbers by 1
        }
    }

    // Step 4: Print the final lists
    printf("\n--- Results ---\n");
    
    printf("Even numbers: ");
    for (int i = 0; i < evenCount; i++) {
        printf("%d ", evenNumbers[i]);
    }
    printf("\n"); // Move to the next line for a clean output

    printf("Odd numbers: ");
    for (int i = 0; i < oddCount; i++) {
        printf("%d ", oddNumbers[i]);
    }
    printf("\n");

    return 0;   
}