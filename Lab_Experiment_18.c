#include <stdio.h>

int main() {
    float price;
    float totalBill = 0.0;
    int i;
    printf("Welcome to the Bill Calculator!\n");
    // Loop to get the price of each of the 5 items
    for (i = 1; i <= 5; i++) {
        printf("Enter the price of item %d: ", i);
        scanf("%f", &price);
        totalBill += price; // Add the current item's price to the total
    }
    printf("\n----------------------------------\n");
    printf("Total Bill: %.2f\n", totalBill); 
    // Print the total bill, formatted to two decimal places
    printf("----------------------------------\n");
    return 0;
}
