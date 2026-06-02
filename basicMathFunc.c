
// Name: Namrata Ankush Surwase
// Branch: EXTC(R)
// PRN:2503033111372L003
// Batch:A

#include <stdio.h>

// Function declarations
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(int a, int b);
int modulus(int a, int b);

int main() {
    int x, y;

    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);

    printf("Addition = %d\n", add(x, y));
    printf("Subtraction = %d\n", subtract(x, y));
    printf("Multiplication = %d\n", multiply(x, y));

    if (y != 0) {
        printf("Division = %.2f\n", divide(x, y));
        printf("Modulus = %d\n", modulus(x, y));
    } else {
        printf("Division and Modulus by zero are not allowed.\n");
    }

    return 0;
}

// Function definitions
int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}

float divide(int a, int b) {
    return (float)a / b;
}

int modulus(int a, int b) {
    return a % b;
}