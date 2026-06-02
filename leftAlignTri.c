// Name: Namrata Ankush Surwase
// Branch: EXTC(R)
// PRN:2503033111372L003
// Batch:A
#include <stdio.h>

int main() {
    int n = 5;

    for (int i = n; i >= 1; i--) {
        for (int j = 1; j <= i; j++) {
            printf("* ");
        }
        printf("\n");
    }

    return 0;
}