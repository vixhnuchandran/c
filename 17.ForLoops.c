#include <stdio.h> // Include standard input-output library

// Function prototype
void multiplicationTable(int number); // Function to print the multiplication table of a given number

// Main function - Program execution starts here
int main() {
    int num; // Declare a variable to hold the number

    // Prompt the user to enter a number
    printf("Enter a number to display its multiplication table: ");
    scanf("%d", &num); // Read the number from user input

    // Call the function to print the multiplication table
    multiplicationTable(num);

    return 0; // End of the main function, returns 0 to indicate successful execution
}

// Function to print the multiplication table of a given number
void multiplicationTable(int number) {
    printf("Multiplication Table of %d:\n", number); // Print the header for the table

    // Loop to calculate and print the multiplication table from 1 to 10
    for (int i = 1; i <= 10; i++) {
        // Print the multiplication result in the format "number x i = result"
        printf("%d x %d = %d\n", number, i, number * i);
    }
}
