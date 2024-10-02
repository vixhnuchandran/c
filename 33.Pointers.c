#include <stdio.h> // Include the standard input-output library

int main() {
    int num = 10;           // Declare an integer variable
    int *ptr = &num;       // Declare a pointer variable and assign it the address of 'num'

    // Display the value and address of the integer variable
    printf("Value of num: %d\n", num);                     // Output the value of num
    printf("Address of num: %p\n", (void*)&num);           // Output the address of num
    printf("Pointer ptr: %p\n", (void*)ptr);               // Output the address stored in ptr
    printf("Value pointed to by ptr: %d\n", *ptr);         // Dereference ptr to get the value of num

    // Modify the value of num using the pointer
    *ptr = 20; // Change the value of num using the pointer

    // Display the modified value
    printf("\nAfter modifying the value using the pointer:\n");
    printf("Value of num: %d\n", num);                     // Output the new value of num
    printf("Value pointed to by ptr: %d\n", *ptr);         // Dereference ptr to get the updated value

    // Pointer arithmetic example
    int arr[] = {1, 2, 3, 4, 5}; // Declare and initialize an array
    int *arrPtr = arr;           // Assign the address of the first element to the pointer

    printf("\nArray elements accessed using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(arrPtr + i), (void*)(arrPtr + i)); // Output each element and its address
    }

    return 0; // End of the main function
}
