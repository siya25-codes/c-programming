#include <stdio.h>

int main()
{
    char grade;

    printf("Enter Grade (A/B/C): ");
    scanf(" %c", &grade);

    switch(grade)
    {
        case 'A':
            printf("Excellent");
            break;

        case 'B':
            printf("Good");
            break;

        case 'C':
            printf("Average");
            break;

        default:
            printf("Invalid Grade");
    }

    return 0;
}