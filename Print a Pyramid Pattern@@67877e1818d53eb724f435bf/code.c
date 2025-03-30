#include <stdio.h>

int main() {
    int N, i, j, space;

    // Taking user input for number of rows
    printf("Enter the number of rows: ");
    if (scanf("%d", &N) != 1 || N <= 0) {  // Check for valid input
        printf("Invalid input! Please enter a positive integer.\n");
        return 1; // Exit with error
    }

    // Loop for each row
    for (i = 1; i <= N; i++) {
        // Print spaces
        for (space = 1; space <= N - i; space++) {
            printf(" ");
        }
        // Print stars
        for (j = 1; j <= (2 * i - 1); j++) {
            printf("*");
        }
        printf("\n");  // Move to next line
    }

    return 0;
}
