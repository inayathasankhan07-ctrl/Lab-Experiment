#include <stdio.h>

int main() {
    int month;
    printf("Enter month number:");
    scanf("%d", &month);
    switch(month) {
        case1:
        case3:
        case5:
        case7:
        case8:
        case10:
        case12:
        printf("This month has 31 days.\n");
        break;
        case 4:
        case 6:
        case 9:
        case 11:
        printf("This month has 31 days.\n");
        break;
        case2:
        printf("This month has 28 or 29 days.\n");
        break;
        default:
        printf("Invalid month number");
        break;
    }
    return 0;
}
