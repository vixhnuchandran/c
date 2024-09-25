#include <stdio.h>
#include <math.h> // Include the math library for mathematical functions

int main() {
    // Declare a number for demonstration
    double number = 45.0; // Initialize a number

    // Calculate the square root of the number
    double squareRoot = sqrt(number); // sqrt() function computes the square root
    printf("Square root of %.2lf is %.2lf\n", number, squareRoot);

    // Calculate the power of the number (e.g., number raised to the power of 2)
    double power = pow(number, 2); // pow() function computes number raised to the power of 2
    printf("%.2lf raised to the power of 2 is %.2lf\n", number, power);

    // Calculate the sine of the number (in radians)
    double sineValue = sin(number); // sin() function computes the sine of the number
    printf("Sine of %.2lf (in radians) is %.2lf\n", number, sineValue);

    // Calculate the cosine of the number (in radians)
    double cosineValue = cos(number); // cos() function computes the cosine of the number
    printf("Cosine of %.2lf (in radians) is %.2lf\n", number, cosineValue);

    // Calculate the tangent of the number (in radians)
    double tangentValue = tan(number); // tan() function computes the tangent of the number
    printf("Tangent of %.2lf (in radians) is %.2lf\n", number, tangentValue);

    // Calculate the exponential of the number
    double exponentialValue = exp(number); // exp() function computes e^x
    printf("Exponential of %.2lf is %.2lf\n", number, exponentialValue);

    // Calculate the natural logarithm of the number
    double logarithmValue = log(number); // log() function computes the natural logarithm (base e)
    printf("Natural logarithm of %.2lf is %.2lf\n", number, logarithmValue);

    // Calculate the base 10 logarithm of the number
    double log10Value = log10(number); // log10() function computes the logarithm (base 10)
    printf("Base 10 logarithm of %.2lf is %.2lf\n", number, log10Value);

    return 0; // Indicate that the program finished successfully
}
