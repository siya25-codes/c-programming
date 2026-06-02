
// Name: Namrata Ankush Surwase
// Branch: EXTC(R)
// PRN:2503033111372L003
// Batch:A

#include <stdio.h>

int main()
{
    int pin;

    printf("Enter PIN: ");
    scanf("%d", &pin);

    if(pin == 1234)
        printf("Access Granted");
    else
        printf("Wrong PIN");

    return 0;
}