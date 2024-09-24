#include <stdio.h>
#include <stdbool.h>  // Required for using the boolean data type (_Bool)

int main() {
    // Integer Types
    // 'int' is the standard integer type (typically 4 bytes).
    int age = 30;

    // 'short' is a smaller integer type (typically 2 bytes).
    short smallNumber = 32767;

    // 'long' is a larger integer type (typically 4 or 8 bytes depending on system).
    long largeNumber = 123456789L;

    // 'long long' is for even larger integers (typically 8 bytes).
    long long veryLargeNumber = 123456789012345LL;

    // 'unsigned int' is used for non-negative integers only (0 or positive).
    unsigned int positiveAge = 50;

    // Floating Point Types
    // 'float' is used for floating-point numbers with single precision (typically 4 bytes).
    float height = 5.75f;

    // 'double' is for floating-point numbers with double precision (typically 8 bytes).
    double distance = 123456.7890123;

    // 'long double' offers even more precision (typically 16 bytes).
    long double preciseValue = 123456.7890123456789L;

    // Character Type
    // 'char' is used for storing single characters (1 byte).
    char grade = 'A';

    // Boolean Type (requires <stdbool.h>)
    // '_Bool' or 'bool' stores true (1) or false (0).
    bool isPassed = true;  // or you can use _Bool isPassed = 1;


    // Printing the Values
    printf("Integer (int): %d\n", age);
    printf("Small Integer (short): %d\n", smallNumber);
    printf("Large Integer (long): %ld\n", largeNumber);
    printf("Very Large Integer (long long): %lld\n", veryLargeNumber);
    printf("Unsigned Integer (unsigned int): %u\n", positiveAge);
    printf("Float: %.2f\n", height);
    printf("Double: %.10lf\n", distance);
    printf("Long Double: %.18Lf\n", preciseValue);
    printf("Character (char): %c\n", grade);
    printf("Boolean (bool): %s\n", isPassed ? "true" : "false");
    
    return 0;
}
