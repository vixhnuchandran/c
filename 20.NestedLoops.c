#include <stdio.h> // Include standard input-output library

// Main function - Program execution starts here
int main() {
    int i, j; // Loop control variables

    // Outer loop for the first number (1 to 5)
    for (i = 1; i <= 5; i++) {
        printf("Multiplication table for %d:\n", i); // Print the current number

        // Inner loop for the second number (1 to 10)
        for (j = 1; j <= 10; j++) {
            // Print the product of the outer and inner loop variables
            printf("%d x %d = %d\n", i, j, i * j); // Output the multiplication result
        }
        
        printf("\n"); // Print a blank line for better readability
    }

    return 0; // End of the main function, returns 0 to indicate successful execution
}
