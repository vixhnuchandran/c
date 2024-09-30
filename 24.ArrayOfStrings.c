#include <stdio.h>
#include <string.h>

// Function to print each string in an array of strings
void printArrayOfStrings(int size, char arr[][50]);  

int main() {
    // Declare and initialize an array of strings (array of char arrays)
    char fruits[5][50] = {
        "Apple", 
        "Banana", 
        "Cherry", 
        "Date", 
        "Elderberry"
    };

    // Print the array of strings
    printf("List of fruits:\n");
    printArrayOfStrings(5, fruits);

    // Modify one of the strings
    strcpy(fruits[1], "Blueberry");  // Change "Banana" to "Blueberry"

    // Print the modified array of strings
    printf("\nList of fruits after modification:\n");
    printArrayOfStrings(5, fruits);

    return 0;
}

// Function to print an array of strings
void printArrayOfStrings(int size, char arr[][50]) {
    for (int i = 0; i < size; i++) {
        printf("%s\n", arr[i]);  // Print each string
    }
}
