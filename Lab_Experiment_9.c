#include <stdio.h>

int main() {
    float balance, interestRate, charge, bonus, divisor;
    // Input initial balance
    printf("Enter initial bank balance: ");
    scanf("%f", &balance);

    // Input operation values
    printf("Enter interest rate (e.g., 0.05 for 5%%): ");
    scanf("%f", &interestRate);

    printf("Enter service charge amount: ");
    scanf("%f", &charge);
    printf("Enter bonus amount: ");
    scanf("%f", &bonus);
    printf("Enter divisor (for example, number of account holders): ");
    scanf("%f", &divisor);

    // Apply interest
    balance *= (1 + interestRate);
    printf("After applying interest: %.2f\n", balance);

    // Deduct charge
    balance -= charge;
    printf("After deducting charge: %.2f\n", balance);

    // Add bonus
    balance += bonus;
    printf("After adding bonus: %.2f\n", balance);

    // Divide balance
    balance /= divisor;
    printf("After division: %.2f\n", balance);
    return 0;
}
