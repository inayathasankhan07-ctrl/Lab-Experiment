#include <stdio.h>

int main() {
    float balance1, balance2;
    // Input two account balances
    printf("Enter first account balance: ");
    scanf("%f", &balance1);
    printf("Enter second account balance: ");
    scanf("%f", &balance2);

    int isEqual = (balance1 == balance2);
    int isFirstGreater = (balance1 > balance2);
    int isSecondGreater = (balance2 > balance1);
    printf("\nResults:\n");

    printf("Both balances are equal: %d\n", isEqual);
    printf("First balance is greater: %d\n", isFirstGreater);
    printf("Second balance is greater: %d\n", isSecondGreater);
    return 0;
}