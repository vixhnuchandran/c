#include <stdio.h>

int main() {
    // Variable Declaration and Initialization

    // 1. Declaration: "int x"
    //    The keyword 'int' declares a variable of type 'integer' (int).
    //    This means 'x' can hold whole numbers (both positive and negative).
    //    In C, the size of 'int' is typically 4 bytes (32 bits) in memory.

    // 2. Initialization: "x = 5"
    //    This assigns the value '5' to the variable 'x'.
    //    Variables can be initialized when declared or later in the program.

    int x = 5;  // Here, 'x' is declared as an int and initialized with 5.

    // Memory Allocation:
    // When 'x' is declared, memory is allocated for it.
    // In most systems, an integer (int) variable takes 4 bytes (32 bits).
    // The memory is used to store the binary representation of the number.
    
    // For example:
    // Value of x = 5 (in decimal)
    // Binary representation (32-bit) = 00000000 00000000 00000000 00000101
    // The number '5' is stored in memory as its binary equivalent.

    // Scope of the Variable:
    // 'x' is a local variable, declared inside the 'main' function.
    // This means it only exists and is accessible within the 'main' function.
    // Once the 'main' function finishes, the memory allocated to 'x' is freed.

    // Variable Usage:
    // The variable 'x' can be used in expressions, conditions, or printed.
    // For example, we can print the value of 'x':
    printf("The value of x is: %d\n", x);  // %d is the format specifier for integers

    // Output:
    // This line will output: "The value of x is: 5"

    // Returning from the 'main' function:
    // The return 0 statement indicates that the program completed successfully.
    return 0;
}
