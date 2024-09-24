#include <stdio.h>

// Using #define to create symbolic constants
#define PI 3.14159           // Defines a constant for the value of Pi
#define MAX_SPEED 200        // Defines the maximum speed as a constant
#define GREETING "Hello!"    // Defines a constant string
#define NEWLINE '\n'         // Defines a constant for the newline escape sequence

int main() {
    // Constants using the `const` keyword
    const int minAge = 18;        // Defining a constant integer (minimum age)
    const float gravity = 9.81f;  // Defining a constant float (gravity acceleration in m/s^2)
    const char grade = 'A';       // Defining a constant character (grade)

    // Print the symbolic constants defined using #define
    printf("The value of PI is: %f%c", PI, NEWLINE);  // Using the newline escape sequence constant
    printf("Max speed allowed is: %d%c", MAX_SPEED, NEWLINE);
    printf("Greeting message: %s%c", GREETING, NEWLINE);

    // Print the constants defined using the `const` keyword
    printf("Minimum age required: %d\n", minAge);     // Displaying constant integer value
    printf("Acceleration due to gravity: %.2f\n", gravity); // Displaying constant float value
    printf("Grade awarded: %c\n", grade);             // Displaying constant character value

    // Demonstrating escape sequences
    printf("Demonstrating Escape Sequences:%c", NEWLINE); 
    printf("Tab space: \t (this text is after a tab)\n"); // \t for tab
    printf("Single quote: \' \n");   // \' for single quote
    printf("Double quote: \" \n");   // \" for double quote
    printf("Backslash: \\ \n");      // \\ for backslash

    return 0;
}
