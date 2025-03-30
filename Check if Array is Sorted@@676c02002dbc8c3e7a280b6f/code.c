#include <stdio.h>

int main() {
    int n, i;
    int sorted = 1; // Assume array is sorted initially

    // Input the size of array
    printf("Enter the number of elements:\n");
    scanf("%d", &n);
    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Check if the array is sorted
    for (i = 0; i < n - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            sorted = 0; // Not sorted
            break;
        }
    }

    // Output result
    if (sorted) {
        printf("The array is sorted in non-decreasing order.\n");
    } else {
        printf("The array is not sorted.\n");
    }

    return 0;
}