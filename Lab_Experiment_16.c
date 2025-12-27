#include <stdio.h>

int main() {
    int color;
    printf("Enter 1 for red \n Enter 2 for yellow \n Enter 3 for green:");
    scanf("%d",&color);
    switch(color) {
        case 1:
        printf("stop\n");
        break;
        case 2:
        printf("ready\n");
        break;
        case 3:
        printf("start\n");
        break;
        default:
        printf("Invalid input!");
    }
    return 0;
}
