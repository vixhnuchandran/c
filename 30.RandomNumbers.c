#include <stdio.h>      // Include the standard input-output library
#include <stdlib.h>     // Include the standard library for random number functions
#include <time.h>       // Include the time library for seeding the random number generator

int main() {
    // Seed the random number generator with the current time
    srand(time(NULL));

    // Specify the range for random numbers
    int lower = 1;  // Lower bound (inclusive)
    int upper = 100; // Upper bound (inclusive)

    // Generate and print 10 random numbers within the specified range
    for (int i = 0; i < 10; i++) {
        // Generate a random number in the range [lower, upper]
        int randomNumber = (rand() % (upper - lower + 1)) + lower;

        // Print the generated random number
        printf("Random Number %d: %d\n", i + 1, randomNumber);
    }

    return 0; // End of the main function
}
