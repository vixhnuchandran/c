#include <stdio.h>

int main() {

    // Declare a variable to store the user's age
    int age;

    // Ask the user to input their age
    printf("Enter your age: ");
    
    // Read the user's input and store it in the 'age' variable
    scanf("%d", &age);

    // The if-else statement starts here

    // Check if the user's age is 18 or more (this is the primary condition)
    if(age >= 18) {
        // If the condition (age >= 18) is true, this block will execute
        printf("Approved");
    }
    
    // If the above condition is false, we check another condition with 'else if'
    else if(age <= 0) {
        // If the condition (age <= 0) is true, this block will execute
        printf("Invalid age!");
    }
    
    // If neither the 'if' nor the 'else if' conditions are true, the 'else' block will execute
    else {
        // If age is between 1 and 17 (both conditions above are false), this block will run
        printf("Forbid");
    }

    // End of the program
    return 0;
}
