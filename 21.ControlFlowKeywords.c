#include <stdio.h> // Include the standard input-output library

// Main function - Program execution starts here
int main() {
    // Example of using 'break' in a loop
    printf("Using break:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Breaking out of the loop when i is %d\n", i);
            break; // Exit the loop when i is 5
        }
        printf("%d ", i); // Print the current value of i
    }
    printf("\n\n"); // New line for better readability

    // Example of using 'continue' in a loop
    printf("Using continue:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Skipping the rest of the loop when i is %d\n", i);
            continue; // Skip the rest of the loop when i is 5
        }
        printf("%d ", i); // Print the current value of i
    }
    printf("\n\n"); // New line for better readability

    // Example of using 'goto' in a loop
    printf("Using goto:\n");
    for (int i = 1; i <= 10; i++) {
        if (i == 5) {
            printf("Jumping to the label when i is %d\n", i);
            goto skip; // Jump to the 'skip' label when i is 5
        }
        printf("%d ", i); // Print the current value of i
    }

    // Skip label for the goto example
    skip:
    printf("\nReached the skip label!\n"); // Indicate that we've reached the label

    return 0; // End of the main function, returns 0 to indicate successful execution
}
