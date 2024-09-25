#include <stdio.h> // Include standard input-output library

// Function prototype
int sumOfIntegers(int number); // Function to calculate the sum of integers from 1 to the given number

// Main function - Program execution starts here
int main() {
    int num; // Declare a variable to hold the user's input

    // Prompt the user to enter a positive integer
    printf("Enter a positive integer: ");
    scanf("%d", &num); // Read the integer from user input

    // Call the function to calculate and display the sum
    int sum = sumOfIntegers(num);
    printf("The sum of integers from 1 to %d is: %d\n", num, sum); // Output the result

    return 0; // End of the main function, returns 0 to indicate successful execution
}

// Function to calculate the sum of integers from 1 to the given number
int sumOfIntegers(int number) {
    int sum = 0; // Initialize sum to 0
    int i = 1;   // Initialize loop counter

    // Loop to sum integers from 1 to 'number'
    while (i <= number) {
        sum += i; // Add the current value of i to sum
        i++;      // Increment i by 1
    }

    return sum; // Return the calculated sum
}
