#include <stdio.h>

int main() {
    int n, i;
    int sorted = 1; // Assume array is sorted initially

    // Input the size of array
   
    scanf("%d", &n);
    int arr[n];

    // Input array elements
   
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
        printf("Sorted");
    } else {
        printf("Not Sorted");
    }

    return 0;
}