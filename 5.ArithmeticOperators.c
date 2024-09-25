#include <stdio.h>

int main() {
    // Declare and initialize two integer variables
    int a = 10;  // First operand
    int b = 5;   // Second operand

    // Display initial values
    printf("Initial values: a = %d, b = %d\n", a, b);

    // Arithmetic Operations
    int sum = a + b;         // Addition: Adds a and b
    int difference = a - b;  // Subtraction: Subtracts b from a
    int product = a * b;     // Multiplication: Multiplies a and b
    float quotient = (float)a / b; // Division: Divides a by b, casting to float for decimal result
    int remainder = a % b;   // Modulus: Gets the remainder of a divided by b

    // Display results of arithmetic operations
    printf("\nArithmetic Operations:\n");
    printf("Addition (a + b): %d + %d = %d\n", a, b, sum);          // Output the sum
    printf("Subtraction (a - b): %d - %d = %d\n", a, b, difference); // Output the difference
    printf("Multiplication (a * b): %d * %d = %d\n", a, b, product); // Output the product
    printf("Division (a / b): %d / %d = %.2f\n", a, b, quotient);     // Output the quotient
    printf("Modulus (a %% b): %d %% %d = %d\n", a, b, remainder);    // Output the remainder

    // Augmented Assignment Operators
    printf("\nUsing Augmented Assignment Operators:\n");

    // Using += to add and assign
    a += b;  // Equivalent to a = a + b
    printf("After a += b: a = %d\n", a); // Display updated value of a

    // Using -= to subtract and assign
    a -= b;  // Equivalent to a = a - b
    printf("After a -= b: a = %d\n", a); // Display updated value of a

    // Using *= to multiply and assign
    a *= b;  // Equivalent to a = a * b
    printf("After a *= b: a = %d\n", a); // Display updated value of a

    // Using /= to divide and assign
    a /= b;  // Equivalent to a = a / b
    printf("After a /= b: a = %d\n", a); // Display updated value of a

    // Using %= to get remainder and assign
    a %= b;  // Equivalent to a = a % b
    printf("After a %%= b: a = %d\n", a); // Display updated value of a

    return 0;
}
