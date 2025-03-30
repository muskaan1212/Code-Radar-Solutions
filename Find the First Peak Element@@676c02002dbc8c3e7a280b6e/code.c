#include<stdio.h>

int main() {
    int i, n, j;
    
    // Input the number of elements
    scanf("%d", &n);

    // Declare array dynamically based on user input size
    int arr[n];

    // Taking input for the array
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]); // Fixed scanf format
    }

    // Finding the maximum element
    j = arr[0];
    for(i = 1; i < n; i++) {
        if(arr[i] > j) {
            j = arr[i];
        }
    }

    // Output the maximum value
    printf("Maximum value: %d\n", j);

    return 0;
}
