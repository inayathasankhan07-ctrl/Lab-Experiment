#include <stdio.h>

int main() {
    int num1, num2;
    int sum, difference, product, modulus;
    float division; // Use float for division to handle decimal results

    // Prompt the user to enter two integers
    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    // Perform arithmetic operations
    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;

    // Typecast one of the operands to float for accurate division
    division = (float)num1 / num2; 

    // Modulus operator (%) works only with integers
    modulus = num1 % num2;

    // Display the results
    printf("\nResults:\n");
    printf("Addition: %d + %d = %d\n", num1, num2, sum);
    printf("Subtraction: %d - %d = %d\n", num1, num2, difference);
    printf("Multiplication: %d * %d = %d\n", num1, num2, product);
    printf("Division: %d / %d = %.2f\n", num1, num2, division); // Display division with 2 decimal places
    printf("Modulus: %d %% %d = %d\n", num1, num2, modulus); // Use %% to print a literal %

    return 0;
}