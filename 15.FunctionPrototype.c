#include <stdio.h>  // Include the standard input-output library

// Function Prototypes (Declarations)
// These are declarations of functions that will be defined later in the code.
// Function prototypes provide the function signature, allowing the compiler to know about the functions before they are called in main.
void greetUser();                    // Function that takes no parameters and returns nothing (void)
int square(int number);              // Function that takes an integer and returns its square
float calculateArea(float radius);   // Function that takes a float (radius) and returns the area of a circle

// Main function - Program execution starts here
int main() {
    greetUser();  // Call the function to greet the user

    int num;  // Variable to hold the user's number
    printf("Enter an integer to square: ");
    scanf("%d", &num);  // Read an integer from the user

    // Call the square function and print the result
    int result = square(num);  // Calculate the square of the entered number
    printf("The square of %d is: %d\n", num, result);  // Display the squared value

    float radius;  // Variable to hold the radius of the circle
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);  // Read the radius from the user

    // Call the calculateArea function and print the result
    float area = calculateArea(radius);  // Calculate the area of the circle
    printf("The area of the circle with radius %.2f is: %.2f\n", radius, area);  // Display the area

    return 0;  // End of the main function, returns 0 to indicate successful execution
}

// Function Definitions

// Function that greets the user
void greetUser() {
    printf("Welcome to the Function Prototype Demonstration!\n");  // Print a greeting message
}

// Function that calculates and returns the square of an integer
int square(int number) {
    return number * number;  // Returns the square of the given number
}

// Function that calculates and returns the area of a circle given its radius
float calculateArea(float radius) {
    return 3.14159 * radius * radius;  // Returns the area using the formula πr²
}
