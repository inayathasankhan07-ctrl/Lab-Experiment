#include <stdio.h>

int main() {
    int myInt = 42;
    float myFloat = 3.14f; // 'f' suffix for float literal
    char myChar = 'A';
    double myDouble = 123.456789;

    printf("Value of myInt: %d\n", myInt);
    printf("Value of myFloat: %.2f\n", myFloat);
    printf("Value of myChar: %c\n", myChar);
    printf("Value of myDouble: %.6lf\n", myDouble);

    printf("\nSize of int: %zu bytes\n", sizeof(myInt));
    printf("Size of float: %zu bytes\n", sizeof(myFloat));
    printf("Size of char: %zu byte\n", sizeof(myChar));
    printf("Size of double: %zu bytes\n", sizeof(myDouble));
    return 0;
}
