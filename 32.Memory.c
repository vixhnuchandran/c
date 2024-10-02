#include <stdio.h> // Include the standard input-output library

int main() {
    // Part 1: Variable and Pointer Declaration
    int number = 10; // Declare an integer variable and initialize it to 10
    int *ptr; // Declare a pointer variable that can hold the address of an integer

    ptr = &number; // Assign the address of 'number' to the pointer 'ptr'

    // Display the value of 'number'
    printf("Value of number: %d\n", number); // Output: 10

    // Display the size of 'number' in bytes
    printf("Size of number: %zu bytes\n", sizeof(number)); // Typically: 4 bytes (depends on the architecture)

    // Display the address of 'number'
    printf("Address of number: %p\n", (void*)&number); // Output: Address in memory

    // Display the value of the pointer 'ptr'
    printf("Value of ptr (address of number): %p\n", (void*)ptr); // Output: Same address as above

    // Display the size of 'ptr' in bytes
    printf("Size of ptr: %zu bytes\n", sizeof(ptr)); // Typically: 8 bytes on a 64-bit system

    // Display the value pointed to by 'ptr'
    printf("Value pointed to by ptr: %d\n", *ptr); // Output: 10

    // Change the value of 'number' using the pointer
    *ptr = 20; // Dereference 'ptr' and assign a new value

    // Display the updated value of 'number'
    printf("Updated value of number: %d\n", number); // Output: 20

    // Display the address of 'ptr' itself
    printf("Address of ptr: %p\n", (void*)&ptr); // Output: Address of the pointer

    // Display the size of the pointer address in bytes
    printf("Size of address of ptr: %zu bytes\n", sizeof(&ptr)); // Typically: 8 bytes on a 64-bit system

    // Part 2: Understanding array and pointer arithmetic
    int arr[] = {1, 2, 3, 4, 5}; // Declare and initialize an array
    int *arrPtr = arr; // Assign the address of the first element to the pointer

    printf("\nArray elements accessed using pointer arithmetic:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, *(arrPtr + i), (void*)(arrPtr + i)); // Output each element and its address
    }

    // Part 3: Displaying sizes of data types
    printf("\nSize of int: %zu bytes\n", sizeof(int));          // Output size of int
    printf("Size of pointer: %zu bytes\n", sizeof(ptr));       // Output size of pointer
    printf("Size of array: %zu bytes\n", sizeof(arr));         // Output size of the entire array

    // Part 4: Consecutive memory allocation
    printf("\nMemory layout of the array elements:\n");
    for (int i = 0; i < 5; i++) {
        printf("Element %d: %d, Address: %p\n", i, arr[i], (void*)&arr[i]); // Output each element and its address
    }

    return 0; // End of the main function
}
