#include <stdio.h>

int main() {
    int customerID;
    char name[50];
    float units, amount, surcharge = 0, totalAmount;
    // Input customer details
    printf("Enter Customer ID: ");
    scanf("%d", &customerID);

    printf("Enter Customer Name: ");
    scanf("%s", name);

    printf("Enter units consumed: ");
    scanf("%f", &units);
    // Calculate amount based on units
    if (units <= 199) {
        amount = units * 1.20;
    }
    else if (units >= 200 && units < 400) {
        amount = units * 1.50;
    }
    else if (units >= 400 && units < 600) {
        amount = units * 1.80;
    }
    else {
        amount = units * 2.00;
    }
    // Apply surcharge if total amount exceeds 400
    if (amount > 400) {
        surcharge = amount * 0.15; // 15% surcharge
    }
    totalAmount = amount + surcharge;
    // Minimum bill of Rs. 100
    if (totalAmount < 100) {
        totalAmount = 100;
    }
    // Display the bill
    printf("\n----- Electricity Bill -----\n");
    printf("Customer ID       : %d\n", customerID);
    printf("Customer Name     : %s\n", name);
    printf("Units Consumed    : %.2f\n", units);
    printf("Amount Charges @Rs.%.2f per unit : %.2f\n", amount / units, amount);
    printf("Surcharge Amount  : %.2f\n", surcharge);
    printf("Net Amount to be Paid : %.2f\n", totalAmount);
    return 0;
}