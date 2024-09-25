#include <stdio.h>

// Function declarations (prototypes)
// We need to declare functions before main if the functions are defined after main.
void displayMessage(char message[]); // Function that takes a string and displays it
int multiply(int a, int b);           // Function that takes two integers and returns their product
float findMax(float num1, float num2); // Function that takes two floats and returns the larger one

// Function definitions

// Function that displays a message passed as an argument
void displayMessage(char message[]) {
    printf("%s\n", message);  // Print the message
}

// Function that multiplies two integers and returns their product
int multiply(int a, int b) {
    return a * b;  // Returns the product of a and b
}

// Function that finds and returns the maximum of two float numbers
float findMax(float num1, float num2) {
    return (num1 > num2) ? num1 : num2;  // Returns the larger of num1 and num2
}

// Main function - Program execution starts here
int main() {
    int x = 4, y = 5, product;          // Declare variables for input and output
    float a = 7.5, b = 2.3, maxValue;  // Variables for floating point operations

    // Calling the displayMessage function
    displayMessage("Welcome to the Argument Demonstration!");  // Passing a string to displayMessage

    // Calling the multiply function
    product = multiply(x, y);  // Passing x and y as arguments to the function multiply
    printf("The product of %d and %d is: %d\n", x, y, product);  // Output: 4 * 5 = 20

    // Calling the findMax function
    maxValue = findMax(a, b);  // Passing a and b to findMax
    printf("The maximum value between %.2f and %.2f is: %.2f\n", a, b, maxValue); // Output the max value formatted to 2 decimal places

    return 0;  // End of the main function, returns 0 to indicate successful execution
}
