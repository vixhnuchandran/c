#include <stdio.h>

// Function declarations (prototypes)
// We need to declare functions before main if the functions are defined after main.
int add(int a, int b);      // A function that takes two integers and returns their sum
void greet();               // A function that returns nothing (void) and takes no parameters
float calculateAverage(float num1, float num2); // A function that returns a float and takes two float parameters

// Function definitions
void greet() {
    printf("Hello! Welcome to the function demo.\n");
}

int add(int a, int b) {
    return a + b;  // Returns the sum of a and b to the caller
}

float calculateAverage(float num1, float num2) {
    return (num1 + num2) / 2;  // Computes and returns the average
}

// Main function - Program execution starts here
int main() {
    int x = 5, y = 10, sum;
    float avg;

    // Calling the greet function
    greet();  // This function doesn't take any arguments and doesn't return any value

    // Calling the add function
    sum = add(x, y);  // Passing x and y as arguments to the function add
    printf("The sum of %d and %d is: %d\n", x, y, sum);  // Output: 5 + 10 = 15

    // Calling the calculateAverage function
    avg = calculateAverage(4.5, 3.0);  // Passing 4.5 and 3.0 to calculateAverage
    printf("The average is: %.2f\n", avg);  // Output the average formatted to 2 decimal places

    return 0;  // End of the main function, returns 0 to indicate successful execution
}
