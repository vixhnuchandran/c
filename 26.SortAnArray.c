#include <stdio.h>  // Include the standard input-output library for using printf

// Function to sort an array using Bubble Sort
void sort(int array[], int size) {
    // Outer loop to control the number of passes
    for (int i = 0; i < size - 1; i++) {
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < size - i - 1; j++) {
            // If the current element is greater than the next, swap them
            if (array[j] > array[j + 1]) {
                int temp = array[j];     // Store the current element in a temporary variable
                array[j] = array[j + 1]; // Move the next element to the current position
                array[j + 1] = temp;     // Move the current element to the next position
            }
        }
    }
}

// Function to print the array
void printArray(int array[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", array[i]);  // Print each element of the array followed by a space
    }
    printf("\n");  // Print a new line after printing all elements
}

// Main function - Program execution starts here
int main() {
    // Define an array of integers
    int array[] = {6, 2, 9, 5, 7, 8, 4, 1, 3};
    
    // Calculate the size of the array
    int size = sizeof(array) / sizeof(array[0]);  // Total memory size of array / size of each element

    // Call the sort function to sort the array
    sort(array, size);
    
    // Call the printArray function to display the sorted array
    printArray(array, size);

    return 0;  // Return 0 to indicate successful program execution
}
