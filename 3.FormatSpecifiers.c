#include <stdio.h>

int main() {
    // Integer types
    int num = 100;
    unsigned int positiveNum = 250;
    long longNum = 123456789L;
    long long veryLongNum = 123456789012345LL;
    unsigned long long unsignedLongNum = 123456789012345ULL;

    // Floating-point types
    float floatNum = 3.14f;
    double doubleNum = 3.14159265359;
    long double longDoubleNum = 3.14159265358979323846L;

    // Character types
    char singleChar = 'A';
    char str[] = "Hello, World!";

    // Boolean type (requires stdbool.h)
    _Bool booleanValue = 1; // Boolean in C (1 for true, 0 for false)

    // Printing integer types
    printf("Integer (%%d): %d\n", num);                // %d: signed integer
    printf("Unsigned Integer (%%u): %u\n", positiveNum); // %u: unsigned integer
    printf("Long Integer (%%ld): %ld\n", longNum);      // %ld: long integer
    printf("Long Long Integer (%%lld): %lld\n", veryLongNum); // %lld: long long integer
    printf("Unsigned Long Long (%%llu): %llu\n", unsignedLongNum); // %llu: unsigned long long

    // Printing floating-point types
    printf("Float (%%f): %f\n", floatNum);              // %f: floating-point
    printf("Double (%%lf): %lf\n", doubleNum);          // %lf: double (long float)
    printf("Long Double (%%Lf): %Lf\n", longDoubleNum); // %Lf: long double

    // Printing character types
    printf("Character (%%c): %c\n", singleChar);        // %c: character
    printf("String (%%s): %s\n", str);                  // %s: string (null-terminated)

    // Printing boolean type
    printf("Boolean (1 for true, 0 for false): %d\n", booleanValue); // %d: boolean values are printed as integers (1 or 0)

    // Hexadecimal and Octal representation
    printf("Hexadecimal (%%x): %x\n", num);             // %x: hexadecimal (lowercase)
    printf("Hexadecimal (%%X): %X\n", num);             // %X: hexadecimal (uppercase)
    printf("Octal (%%o): %o\n", num);                   // %o: octal

    // Printing memory address
    printf("Memory Address (%%p): %p\n", (void*)&num);  // %p: pointer (memory address)

    // Printing formatted width and precision
    printf("Float with 2 decimal places (%%.2f): %.2f\n", floatNum); // %.2f: floating-point with 2 decimal places
    printf("Right-aligned integer (%%5d): %5d\n", num);              // %5d: right-aligned integer with width of 5

    return 0;
}
