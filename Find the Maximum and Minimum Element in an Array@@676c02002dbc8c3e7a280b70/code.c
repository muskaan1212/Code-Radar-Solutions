#include <stdio.h>

int main() {
    int N, i;
    
    // Read the number of elements
    scanf("%d", &N);
    
    int arr[N];
    
    // Read array elements
    for (i = 0; i < N; i++) {
        scanf("%d", &arr[i]);  // Correct indexing
    }
    
    // Initialize max and min
    int max = arr[0], min = arr[0];
    
    // Find max and min
    for (i = 1; i < N; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    
    // Correct output format: min first, then max
    printf("%d %d\n", min, max);
    
    return 0;
}
