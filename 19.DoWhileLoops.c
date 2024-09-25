#include <stdio.h> // Include standard input-output library

// Function prototype
int getPositiveInteger(); // Function to get a positive integer from the user

// Main function - Program execution starts here
int main() {
    int positiveNum; // Variable to hold the positive integer

    // Call the function to get a positive integer
    positiveNum = getPositiveInteger();
    
    // Output the valid positive integer
    printf("You entered a positive integer: %d\n", positiveNum); // Display the result

    return 0; // End of the main function, returns 0 to indicate successful execution
}

// Function to get a positive integer from the user
int getPositiveInteger() {
    int num; // Variable to hold user input

    // Use a do while loop to ensure the user enters a positive integer
    do {
        // Prompt the user to enter a positive integer
        printf("Please enter a positive integer: ");
        scanf("%d", &num); // Read the integer from user input
        
        // Check if the entered number is not positive
        if (num <= 0) {
            printf("That's not a positive integer. Please try again.\n"); // Inform the user
        }
    } while (num <= 0); // Continue looping until a positive integer is entered

    return num; // Return the valid positive integer
}
