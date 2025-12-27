#include <stdio.h>
int main() {
    int n =5;
    int num =1;
    for(int i=0;i<n;i++) {
        for(int j=0;j<n-i;j++) {
            printf(" ");
        }
        for(int k=0;k<=i;k++) {
            printf("* ");
        }
        printf("\n");
    }
    for(int i=1;i<=5;i++) {
        for(int j=0;j<=i;j++) {
            printf(" ");
        }
        for(int k=4;k>=i;k--) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
