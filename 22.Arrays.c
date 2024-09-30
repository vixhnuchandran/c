#include <stdio.h>

// Function Prototypes
void printArray(int arr[], int size); // Function to print array elements
void inputArray(int arr[], int size); // Function to take input for an array

int main() {
    int numbers[5] = {10, 20, 30, 40, 50};  // Declare and initialize an array of 5 integers

    // 1. Array Traversal: Printing the initial elements
    printf("Initial Array Elements:\n");
    printArray(numbers, 5);  // Call the printArray function to print elements

    // 2. Taking input from the user to modify array elements
    printf("\nEnter 5 new numbers:\n");
    inputArray(numbers, 5);  // Call the inputArray function to take user input

    // 3. Array Traversal: Printing the modified elements
    printf("Modified Array Elements:\n");
    printArray(numbers, 5);  // Print the updated array

    // 4. Modifying specific array elements
    printf("\nModifying specific array elements...\n");
    numbers[0] = 100;  // Update the first element
    numbers[4] = 500;  // Update the last element

    // 5. Print the modified array again
    printf("Array after specific modifications:\n");
    printArray(numbers, 5);  // Print modified array

    return 0;
}

// Function to print the elements of an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);  // Print each element
    }
    printf("\n");  // Newline for formatting
}

// Function to take input for an array
void inputArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);  // Take input and store it in the array
    }
}
