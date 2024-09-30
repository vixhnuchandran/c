
#include <stdio.h>

// Function Prototypes
void print2DArray(int rows, int cols, int arr[rows][cols]); // Function to print a 2D array
void input2DArray(int rows, int cols, int arr[rows][cols]); // Function to take input for a 2D array

int main() {
    int matrix[3][3] = {  // Declare and initialize a 3x3 2D array
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // 1. Array Traversal: Printing the initial elements of the 2D array
    printf("Initial 2D Array Elements:\n");
    print2DArray(3, 3, matrix);  // Call the print2DArray function to print the matrix

    // 2. Taking input from the user to modify the 2D array
    printf("\nEnter 9 new elements for the 3x3 matrix:\n");
    input2DArray(3, 3, matrix);  // Call the input2DArray function to take user input

    // 3. Array Traversal: Printing the modified elements of the 2D array
    printf("Modified 2D Array Elements:\n");
    print2DArray(3, 3, matrix);  // Print the updated matrix

    // 4. Modifying specific elements in the 2D array
    printf("\nModifying specific elements...\n");
    matrix[0][0] = 100;  // Update the top-left element
    matrix[2][2] = 900;  // Update the bottom-right element

    // 5. Print the modified 2D array again
    printf("Array after specific modifications:\n");
    print2DArray(3, 3, matrix);  // Print the modified matrix

    return 0;
}

// Function to print a 2D array
void print2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {  // Loop through rows
        for (int j = 0; j < cols; j++) {  // Loop through columns
            printf("%d ", arr[i][j]);  // Print each element
        }
        printf("\n");  // Newline for next row
    }
}

// Function to take input for a 2D array
void input2DArray(int rows, int cols, int arr[rows][cols]) {
    for (int i = 0; i < rows; i++) {  // Loop through rows
        for (int j = 0; j < cols; j++) {  // Loop through columns
            scanf("%d", &arr[i][j]);  // Take input for each element
        }
    }
}
