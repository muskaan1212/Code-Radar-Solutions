#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n); // Read number of balloons

    int balloons[1000]; // Assuming a reasonable max size
    for (int i = 0; i < n; i++) {
        scanf("%d", &balloons[i]); // Read air in each balloon
    }

    while (1) {
        int count = 0;
        int min = 1000000000; // A very large number

        // Count balloons that still have air and find the minimum
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                count++;
                if (balloons[i] < min) {
                    min = balloons[i];
                }
            }
        }

        if (count == 0) {
            break; // All balloons are flat
        }

        printf("%d\n", count); // Print how many balloons had air this round

        // Subtract min from all non-flat balloons
        for (int i = 0; i < n; i++) {
            if (balloons[i] > 0) {
                balloons[i] -= min;
            }
        }
    }

    return 0;
}
