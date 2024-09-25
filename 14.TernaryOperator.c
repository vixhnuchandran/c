#include <stdio.h>  // Include the standard input-output library

// Main function - Program execution starts here
int main() {
    int num;  // Variable to hold the user input
    char *result;  // Pointer to hold the result string

    // Prompt the user for input
    printf("Enter a number: ");
    scanf("%d", &num);  // Read an integer from the user

    // Using the ternary operator to check if the number is even or odd
    result = (num % 2 == 0) ? "Even" : "Odd";  // If num is divisible by 2, it's even; otherwise, it's odd

    // Output the result
    printf("The number %d is %s.\n", num, result);  // Display whether the number is even or odd

    return 0;  // End of the main function, returns 0 to indicate successful execution
}
