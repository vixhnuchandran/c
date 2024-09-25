#include <stdio.h>   // Include the standard input-output library

// Function declarations (prototypes)
void displayMessage(char message[]); // Function that takes a string and displays it
int add(int a, int b);                // Function that takes two integers and returns their sum
float calculateArea(float radius);     // Function that takes a float and returns the area of a circle

// Function definitions

void displayMessage(char message[]) {
    printf("%s\n", message);  // Print the message
}

int add(int a, int b) {
    return a + b;  // Returns the sum of a and b to the caller
}

float calculateArea(float radius) {
    return 3.14159 * radius * radius;  // Uses the formula πr² to calculate area
}

// Main function - Program execution starts here
int main() {
    int x = 5, y = 10, sum;              // Declare variables for integers
    float radius = 3.0, area;            // Declare variables for radius and area

    displayMessage("Welcome to the Return Statement Demonstration!");  // Passing a string to displayMessage

    sum = add(x, y);  // Pass x and y as arguments to the add function
    printf("The sum of %d and %d is: %d\n", x, y, sum);  // Output the result of the addition

    area = calculateArea(radius);  // Pass radius to calculateArea
    printf("The area of a circle with radius %.2f is: %.2f\n", radius, area); // Output the area formatted to 2 decimal places

    return 0;  // End of the main function, returns 0 to indicate successful execution
}
