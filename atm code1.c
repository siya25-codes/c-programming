#include <stdio.h>

int main() {
    long long int correctAccount = 9876543210;
    long long int accountNumber;
    int correctPin = 4321;
    int enteredPin;
    int attempts;
    int choice;
    int balance = 2000;
    int withdraw;

    // ACCOUNT NUMBER
    printf("Enter Account Number: ");
    scanf("%lld", &accountNumber);

    if (accountNumber != correctAccount) {
        printf("Invalid Account Number\n");
        return 0;
    }

    // MENU LOOP
    while (1) {

        printf("\n--- ATM MENU ---\n");
        printf("1. Check Balance\n");
        printf("2. Withdraw Money\n");
        printf("3. Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        // EXIT
        if (choice == 3) {
            printf("Thank you for using ATM\n");
            return 0;
        }

        // RESET PIN ATTEMPTS FOR EACH ACTION
        attempts = 0;

        // CHECK BALANCE
        if (choice == 1) {

            while (attempts < 3) {

                printf("Enter PIN: ");
                scanf("%d", &enteredPin);

                if (enteredPin == correctPin) {
                    printf("Your Balance: %d\n", balance);
                    break;
                } else {
                    attempts++;

                    if (attempts < 3) {
                        printf("Wrong PIN! Try again\n");
                    }
                }
            }

            if (attempts == 3) {
                printf("Account Blocked\n");
                return 0;
            }
        }

        // WITHDRAW MONEY
        else if (choice == 2) {

            while (attempts < 3) {

                printf("Enter PIN: ");
                scanf("%d", &enteredPin);

                if (enteredPin == correctPin) {

                    printf("Enter amount to withdraw: ");
                    scanf("%d", &withdraw);

                    if (withdraw <= balance) {
                        balance = balance - withdraw;
                        printf("Please collect cash\n");
                        printf("Remaining Balance: %d\n", balance);
                    } else {
                        printf("Insufficient Balance\n");
                    }

                    break;
                } else {
                    attempts++;

                    if (attempts < 3) {
                        printf("Wrong PIN! Try again\n");
                    }
                }
            }

            if (attempts == 3) {
                printf("Account Blocked\n");
                return 0;
            }
        }

        else {
            printf("Invalid Choice\n");
        }
    }

    return 0;
}