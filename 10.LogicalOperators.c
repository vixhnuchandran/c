#include <stdio.h>

int main() {

    int age;
    char hasPermission;

    // Ask the user to input their age
    printf("Enter your age: ");
    scanf("%d", &age);

    // Ask if they have permission (Y for yes, N for no)
    printf("Do you have permission? (Y/N): ");
    scanf(" %c", &hasPermission);

    // Logical AND (&&) example:
    // Check if the user is at least 18 years old AND has permission (either Y or y)
    if (age >= 18 && (hasPermission == 'Y' || hasPermission == 'y')) {
        printf("Access granted! You are an adult with permission.\n");
    }

    // Logical OR (||) example:
    // Check if the user is younger than 18 OR does not have permission (either N or n)
    else if (age < 18 || hasPermission == 'N' || hasPermission == 'n') {
        printf("Access denied! You are either too young or lack permission.\n");
    }

    // Logical NOT (!) example:
    // Check if the user entered invalid input (age less than or equal to 0)
    if (!(age > 0)) {
        printf("Invalid age entered!\n");
    }

    return 0;
}
