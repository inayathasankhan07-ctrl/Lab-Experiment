#include <stdio.h>

int main() {
    int count_present = 0; // Initialize a counter for present days
    int attendance_record; // Variable to store the input for each day
    int day; // Loop counter variable

    printf("Enter attendance for 30 days (1 for present, 0 for absent):\n");

    // Loop 30 times, once for each day
    for (day = 1; day <= 30; day++) {
        printf("Day %d: ", day);
        scanf("%d", &attendance_record);

        // Check if the input is '1' (present) and increment the counter
        if (attendance_record == 1) {
            count_present++;
        }
    }

    printf("\nTotal present days: %d\n", count_present);

    return 0;
}
