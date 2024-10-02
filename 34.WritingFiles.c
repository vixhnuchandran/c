#include <stdio.h> // Include the standard input-output library

int main() {
    // Declare a file pointer
    FILE *filePointer;

    // Open a file in write mode (it will create a new file or overwrite an existing file)
    filePointer = fopen("example.txt", "w");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n"); // Print error message if file opening fails
        return 1; // Exit the program if file opening fails
    }

    // Write to the file using fprintf
    fprintf(filePointer, "Hello, World!\n"); // Write a formatted string to the file
    fprintf(filePointer, "This is a sample file.\n"); // Write another line

    // Alternatively, you can use fputs to write a string
    fputs("This line is written using fputs.\n", filePointer); // Write a string directly to the file

    // Close the file
    fclose(filePointer); // Always close the file to free resources and ensure all data is written

    printf("Data written to file successfully.\n"); // Indicate success
    return 0; // End of the main function
}
