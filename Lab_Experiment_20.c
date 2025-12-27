#include <stdio.h>

int main() {
    // Declare variables
    int age;          // To store the age input by the user
    int count = 0;    // To store the number of employees 30 or older
    int total_employees = 10; // Total number of employees to check

    printf("Enter the ages of 10 employees:\n");

    // Loop 10 times to get the age of each employee
    for (int i = 1; i <= total_employees; i++) {
        printf("Employee %d age: ", i);
        // Read the age from the user
        if (scanf("%d", &age) != 1) {
            printf("Invalid input. Please enter a number.\n");
            // Clear the input buffer in case of invalid input to prevent infinite loops
            while(getchar() != '\n'); 
            i--; // Decrement i to re-prompt for the same employee number
            continue;
        }

        // Check if the entered age is 30 or older
        if (age >= 30) {
            count++; // Increment the count if the condition is met
        }
    }

    // Print the final result
    printf("\nTotal employees 30 years or older: %d\n", count);

    return 0;
}

