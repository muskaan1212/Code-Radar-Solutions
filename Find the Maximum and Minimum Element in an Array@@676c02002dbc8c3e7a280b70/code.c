#include <stdio.h>

int main() {
    int N, i;

    // Read number of elements
    scanf("%d", &N);

    int arr[N];

    // Read array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]); // Fixed indexing issue
    }

    // Initialize max and min with the first element
    int max = arr[0], min = arr[0];

    // Find max and min values
    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }

    // Print results
    printf("%d", max);
    printf("%d", min);

    return 0; // Proper program termination
}
