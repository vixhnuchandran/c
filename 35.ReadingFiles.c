#include <stdio.h> // Include the standard input-output library

int main() {
    // Declare a file pointer
    FILE *filePointer;
    char buffer[255]; // Buffer to hold each line read from the file

    // Open the file in read mode
    filePointer = fopen("example.txt", "r");

    // Check if the file was opened successfully
    if (filePointer == NULL) {
        printf("Error opening file!\n"); // Print error message if file opening fails
        return 1; // Exit the program if file opening fails
    }

    // Read the contents of the file line by line
    while (fgets(buffer, sizeof(buffer), filePointer) != NULL) {
        // Print each line read from the file
        printf("%s", buffer); // Output the line to the console
    }

    // Close the file
    fclose(filePointer); // Always close the file to free resources

    return 0; // End of the main function
}
