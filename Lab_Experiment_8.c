#include <stdio.h>
#include <string.h>

int main() {
    char username[50], password[50];
    // Predefined credentials
    char correctUser[] = "admin";
    char correctPass[] = "1234";
    // Input from user
    printf("Enter username: ");
    scanf("%s", &username);
    printf("Enter password: ");
    scanf("%s", &password);
    // Compare using logical operators only
    int isUserMatch = (strcmp(username, correctUser) == 0);
    int isPassMatch = (strcmp(password, correctPass) == 0);
    // Combine results logically
    int loginSuccess = (isUserMatch && isPassMatch);
    // Use logical expression to print result without conditionals
    printf("%s\n", loginSuccess ? "Login Successful" : "Invalid Login");
    return 0;
}

