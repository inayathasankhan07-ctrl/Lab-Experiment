#include <stdio.h>

int main() {
    int day;
    float daily_distance, total_distance = 0.0;
    int days_in_month = 30;

    printf("Enter the walking distance for each of the 30 days (in km):\n");

    for (day = 1; day <= days_in_month; day++) {
        printf("Day %d distance: ", day);
        if (scanf("%f", &daily_distance) != 1) {
            printf("Invalid input. Please enter a valid number.\n");
            return 1; // Exit the program due to invalid input
        }
        total_distance += daily_distance;
    }
    printf("\nTotal kilometers walked in the month: %.2f km\n", total_distance);
    return 0;
}