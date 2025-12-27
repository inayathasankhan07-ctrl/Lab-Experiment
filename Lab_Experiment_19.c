#include <stdio.h>

int main() {
    int dailyUsage[7]; // Array to store daily electricity usage
    int totalConsumption = 0; // Variable to store total weekly consumption

    printf("Enter daily electricity usage (in units) for 7 days:\n");

    // Loop to get daily usage input and calculate total
    for (int i = 0; i < 7; i++) {
        printf("Day %d: ", i + 1);
        scanf("%d", &dailyUsage[i]); // Read daily usage
        totalConsumption += dailyUsage[i]; // Add to total consumption
    }

    printf("\nTotal weekly electricity consumption: %d units\n", totalConsumption);

    return 0;
}
