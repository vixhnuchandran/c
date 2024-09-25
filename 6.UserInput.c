#include <stdio.h>

int main() {
    // Declare variables for user input
    char name[50];  // Array to hold the user's name
    int age;        // Variable to hold the user's age

    // Prompt the user for their name
    printf("Enter your name: ");
    scanf("%49s", name);  // Read user input for name (limit to 49 characters)

    // Prompt the user for their age
    printf("Enter your age: ");
    scanf("%d", &age);    // Read user input for age

    // Display the information entered by the user
    printf("\nHello, %s! You are %d years old.\n", name, age); // Output the name and age

    return 0; // Indicate that the program finished successfully
}
