#include <stdio.h>       // Include standard input-output library
#include <string.h>      // Include string library for string manipulation functions

// Function prototypes
void stringLengthDemo(); // Demonstrate string length calculation
void stringCopyDemo();   // Demonstrate string copying
void stringConcatDemo(); // Demonstrate string concatenation
void stringCompareDemo(); // Demonstrate string comparison

// Main function - Program execution starts here
int main() {
    // Call each demonstration function to showcase different string operations
    stringLengthDemo();  // Demonstrate string length
    stringCopyDemo();    // Demonstrate string copying
    stringConcatDemo();  // Demonstrate string concatenation
    stringCompareDemo(); // Demonstrate string comparison

    return 0; // End of the main function, returns 0 to indicate successful execution
}

// Function that demonstrates the use of strlen to find the length of a string
void stringLengthDemo() {
    char str[100];  // Declare a character array to hold the string

    // Prompt the user to enter a string
    printf("Enter a string to find its length: ");
    fgets(str, sizeof(str), stdin);  // Read the string from the user

    // Use strlen to get the length of the string
    int length = strlen(str) - 1; // Subtracting 1 to ignore the newline character
    printf("The length of the string \"%s\" is: %d\n", str, length);  // Output the length
}

// Function that demonstrates the use of strcpy to copy a string
void stringCopyDemo() {
    char source[100];       // Declare a source string
    char destination[100];  // Declare a destination string

    // Prompt the user to enter a source string
    printf("Enter a source string to copy: ");
    fgets(source, sizeof(source), stdin); // Read the source string

    // Use strcpy to copy the source string to the destination
    strcpy(destination, source);  // Copy source to destination
    printf("Copied string: %s", destination);  // Output the copied string
}

// Function that demonstrates the use of strcat to concatenate strings
void stringConcatDemo() {
    char str1[100];  // Declare the first string
    char str2[100];  // Declare the second string

    // Prompt the user to enter two strings to concatenate
    printf("Enter the first string: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string
    printf("Enter the second string: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string

    // Use strcat to concatenate str2 to str1
    strcat(str1, str2);  // Append str2 to str1
    printf("Concatenated string: %s", str1);  // Output the concatenated string
}

// Function that demonstrates the use of strcmp to compare two strings
void stringCompareDemo() {
    char str1[100];  // Declare the first string
    char str2[100];  // Declare the second string

    // Prompt the user to enter two strings to compare
    printf("Enter the first string to compare: ");
    fgets(str1, sizeof(str1), stdin);  // Read the first string
    printf("Enter the second string to compare: ");
    fgets(str2, sizeof(str2), stdin);  // Read the second string

    // Use strcmp to compare the two strings
    int result = strcmp(str1, str2);  // Compare str1 and str2
    if (result == 0) {
        printf("The strings are equal.\n");  // Output if strings are equal
    } else if (result < 0) {
        printf("The first string is less than the second string.\n");  // Output if str1 is less than str2
    } else {
        printf("The first string is greater than the second string.\n");  // Output if str1 is greater than str2
    }
}
