#include <stdio.h> // Include the standard input-output library

// Define a struct for a 2D point with a typedef
typedef struct {
    int x;       // X coordinate of the point
    int y;       // Y coordinate of the point
} Point; // Create a typedef alias for the struct

// Function to display the coordinates of a point
void displayPoint(Point p) { // Use the typedef alias instead of 'struct'
    printf("Point coordinates: (%d, %d)\n", p.x, p.y); // Print the point's coordinates
}

// Function to move the point by a specified delta
Point movePoint(Point p, int deltaX, int deltaY) {
    p.x += deltaX; // Update the X coordinate
    p.y += deltaY; // Update the Y coordinate
    return p; // Return the updated point
}

int main() {
    Point p1; // Declare a variable of type Point

    // Initialize the coordinates of the point
    p1.x = 5; 
    p1.y = 10;

    // Call the function to display the point's coordinates
    displayPoint(p1); // Output: Point coordinates: (5, 10)

    // Move the point by (3, 4)
    p1 = movePoint(p1, 3, 4); // Update p1 with the new coordinates

    // Call the function again to display the updated coordinates
    displayPoint(p1); // Output: Point coordinates: (8, 14)

    return 0; // End of the main function
}
