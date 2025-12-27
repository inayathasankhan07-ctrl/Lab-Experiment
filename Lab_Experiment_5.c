#include <stdio.h>

int main() {
    int a = 5;
    int b = 5;
    int result_pre, result_post;

    printf("Initial values:\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);
    // Demonstrating pre-increment ( ++a )
    // 'a' is incremented first, then its new value is used in the expression.
    result_pre = ++a * 2; 
    printf("\nAfter pre-increment (result_pre = ++a * 2):\n");
    printf("result_pre = %d\n", result_pre); // Expected: (5+1)*2 = 12
    printf("a = %d\n", a);                   // Expected: 6

    // Demonstrating post-increment ( b++ )
    // The original value of 'b' is used in the expression, then 'b' is incremented.
    result_post = b++ * 2;
    printf("\nAfter post-increment (result_post = b++ * 2):\n");
    printf("result_post = %d\n", result_post); // Expected: 5*2 = 10
    printf("b = %d\n", b);                     // Expected: 6
    return 0;
}