#include <stdio.h> // Include the standard input-output library

// Define an enumeration for the days of the week
enum Day {
    SUNDAY,    // 0
    MONDAY,    // 1
    TUESDAY,   // 2
    WEDNESDAY, // 3
    THURSDAY,  // 4
    FRIDAY,    // 5
    SATURDAY   // 6
};

// Function to display the name of the day based on the enum value
void displayDay(enum Day day) {
    // Use a switch statement to determine the name of the day
    switch (day) {
        case SUNDAY:
            printf("It's Sunday.\n");
            break;
        case MONDAY:
            printf("It's Monday.\n");
            break;
        case TUESDAY:
            printf("It's Tuesday.\n");
            break;
        case WEDNESDAY:
            printf("It's Wednesday.\n");
            break;
        case THURSDAY:
            printf("It's Thursday.\n");
            break;
        case FRIDAY:
            printf("It's Friday.\n");
            break;
        case SATURDAY:
            printf("It's Saturday.\n");
            break;
        default:
            printf("Invalid day!\n"); // Handle invalid input
    }
}

int main() {
    enum Day today = WEDNESDAY; // Declare a variable of type enum Day and initialize it

    // Call the function to display the current day
    displayDay(today);

    return 0; // End of the main function
}
