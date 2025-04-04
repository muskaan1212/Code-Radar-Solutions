#include <stdio.h>

// Function to calculate Fibonacci number recursively
void fibonacci(int n) {
    if (n <= 1)
        return n;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    // Input the number of Fibonacci terms to print
    scanf("%d", &n);

    // Print Fibonacci sequence up to n terms
    for (int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    printf("\n");
    return 0;
}