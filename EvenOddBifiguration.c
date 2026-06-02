#include <stdio.h>

int main() {
    int a[10], even[10], odd[10];
    int e = 0, o = 0;

    // Input 10 numbers
    for (int i = 0; i < 10; i++) {
        printf("Enter value at index %d: ", i);
        scanf("%d", &a[i]);
    }

    // Separate even and odd numbers
    for (int i = 0; i < 10; i++) {
        if (a[i] % 2 == 0) {
            even[e] = a[i];
            e++;
        } else {
            odd[o] = a[i];
            o++;
        }
    }

    // Display even numbers
    printf("\nEven numbers:\n");
    for (int i = 0; i < e; i++) {
        printf("%d\t", even[i]);
    }

    // Display odd numbers
    printf("\n\nOdd numbers:\n");
    for (int i = 0; i < o; i++) {
        printf("%d\t", odd[i]);
    }

    return 0;
}