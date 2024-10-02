#include <stdio.h>
#include <string.h>  // For using functions like strcpy

// Define a structure for a Person
struct Person {
    char name[50];   // Array to store the name of the person
    int age;         // Variable to store the age of the person
    float height;    // Variable to store the height of the person in meters
};

// Function to display person details
void displayPerson(struct Person p) {
    printf("Name: %s\n", p.name);      // Accessing name field
    printf("Age: %d\n", p.age);        // Accessing age field
    printf("Height: %.2f meters\n", p.height);  // Accessing height field
}

int main() {
    // Declare a variable 'person1' of type 'struct Person'
    struct Person person1;

    // Assign values to the fields of the 'person1' structure
    strcpy(person1.name, "Alice");   // Use strcpy to assign a string to the name field
    person1.age = 30;                // Assign age
    person1.height = 1.65f;          // Assign height (float value)

    // Declare and initialize another structure variable 'person2'
    struct Person person2 = {"Bob", 25, 1.75f};  // Direct initialization

    // Call function to display details of person1
    printf("Details of Person 1:\n");
    displayPerson(person1);

    // Call function to display details of person2
    printf("\nDetails of Person 2:\n");
    displayPerson(person2);

    return 0;
}
