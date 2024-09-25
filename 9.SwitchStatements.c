#include <stdio.h>

int main() {

    // Declare a variable to store the user's grade
    char grade;

    // Ask the user to input their grade
    printf("Enter your grade (A, B, C, D, F): ");
    
    // Read the user's input and store it in the 'grade' variable
    scanf(" %c", &grade);

    // Start of the switch statement
    switch (grade) {
        
        // Case when the grade is 'A'
        case 'A':
            printf("Excellent! You got an A.");
            break;  // Break exits the switch once this case is executed

        // Case when the grade is 'B'
        case 'B':
            printf("Good job! You got a B.");
            break;

        // Case when the grade is 'C'
        case 'C':
            printf("Well done! You got a C.");
            break;

        // Case when the grade is 'D'
        case 'D':
            printf("You passed with a D.");
            break;

        // Case when the grade is 'F'
        case 'F':
            printf("You failed with an F.");
            break;

        // Default case: if none of the above cases are matched
        default:
            printf("Invalid grade entered.");
            break;  // This is optional in default, but a good practice
    }

    // End of the program
    return 0;
}
