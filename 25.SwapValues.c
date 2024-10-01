#include <stdio.h>
#include <string.h>  // Include the string library for strcpy

int main() {
    // Integer swapping
    int a = 5; 
    int b = 10; 
    int temp;  // Temporary variable for swapping integers

    // Print values before swapping
    printf("Before swapping (Integers): a = %d, b = %d\n", a, b);

    // Swap using a temporary variable
    temp = a; // Store the value of a in temp
    a = b;    // Assign the value of b to a
    b = temp; // Assign the value of temp (original a) to b

    // Print values after swapping
    printf("After swapping (Integers): a = %d, b = %d\n", a, b);

    // String swapping
    char str1[50] = "Hello"; // Declare and initialize first string
    char str2[50] = "World"; // Declare and initialize second string
    char tempStr[50];       // Temporary variable for swapping strings

    // Print values before swapping
    printf("Before swapping (Strings): str1 = %s, str2 = %s\n", str1, str2);

    // Swap using strcpy
    strcpy(tempStr, str1); // Copy str1 to tempStr
    strcpy(str1, str2);    // Copy str2 to str1
    strcpy(str2, tempStr); // Copy tempStr (original str1) to str2

    // Print values after swapping
    printf("After swapping (Strings): str1 = %s, str2 = %s\n", str1, str2);

    return 0; // Indicate successful completion of the program
}
