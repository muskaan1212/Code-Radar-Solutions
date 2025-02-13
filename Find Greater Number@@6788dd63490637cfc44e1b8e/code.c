// Your code here...
#include <stdio.h>

int main() {
    int a, b;
scanf("%d %d", &a, &b);
if (a > b) {
        printf("%d %d\n", a);
    } else if (b > a) {
        printf("%d %d\n", b);
    } else {
        printf("equal\n");
    }

    return 0;
}
