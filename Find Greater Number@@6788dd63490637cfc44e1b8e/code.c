// Your code here...
#include <stdio.h>

int main() {
    int a, b;

    // Taking input from the user
    scanf("%d %d", &a, &b);

    // Finding and printing the greater number or stating if they are equal
    if (a > b) {
        printf("%d %d\n", a, b);
    } else if (b > a) {
        printf("%d %d\n", b, a);
    } else {
        printf("equal\n");
    }

    return 0;
}
