#include <stdio.h>

int main() {
    int n=5;

    for(int i=0;i<n;i++) { // outer
        char ch ='*';
        for(int j=0;j<n;j++) { // inner
            printf("* ");
            // ch =ch +1; // char = char+1
        }
        printf("\n");
    }
    return 0;
}