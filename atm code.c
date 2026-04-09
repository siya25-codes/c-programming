#include <stdio.h>

int main() {
    long long int correctAccount = 9876543210;
    long long int accountNumber;
    int correctPin = 4321;
    int enteredPin;
    int attempts = 0;

    printf("Enter 10-digit Account Number: ");
    scanf("%lld", &accountNumber);

    // Check account number first
    if (accountNumber != correctAccount) {
        printf("Invalid Account Number\n");
        return 0;
    }

    // PIN attempts
    while (attempts < 3) {
        printf("Enter PIN: ");
        scanf("%d", &enteredPin);

        if (enteredPin == correctPin) {
            printf("Transaction Successful\n");
            break;
        } else {
            attempts++;
            printf("Wrong PIN! Try again\n");

            if (attempts < 3) {
                continue;
            }
        }
    }

    // After 3 wrong attempts
    if (attempts == 3) {
        printf("Account Blocked\n");
    }

    return 0;
}