#include <stdio.h> // Include the standard input-output library

int main() {
    int a = 5; // Binary: 0101
    int b = 3; // Binary: 0011

    // Bitwise AND
    int andResult = a & b; // result = 1 (Binary: 0001)
    printf("AND: %d\n", andResult); // Print result of AND operation

    // Bitwise OR
    int orResult = a | b; // result = 7 (Binary: 0111)
    printf("OR: %d\n", orResult); // Print result of OR operation

    // Bitwise XOR
    int xorResult = a ^ b; // result = 6 (Binary: 0110)
    printf("XOR: %d\n", xorResult); // Print result of XOR operation

    // Bitwise NOT
    int notResult = ~a; // result = -6 (Binary: 1010 in 2's complement)
    printf("NOT: %d\n", notResult); // Print result of NOT operation

    // Left Shift
    int leftShiftResult = a << 1; // result = 10 (Binary: 1010)
    printf("Left Shift: %d\n", leftShiftResult); // Print result of left shift

    // Right Shift
    int rightShiftResult = a >> 1; // result = 2 (Binary: 0010)
    printf("Right Shift: %d\n", rightShiftResult); // Print result of right shift

    return 0; // End of the main function
}
