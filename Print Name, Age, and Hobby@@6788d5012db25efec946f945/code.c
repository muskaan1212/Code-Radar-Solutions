#include <stdio.h>

int main() {
    char name[50], hobby[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);  // Takes a single-word name

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your hobby: ");
    scanf("%s", hobby);  // Takes a single-word hobby

    printf("\nName: %s\nAge: %d\nHobby: %s\n", name, age, hobby);

    return 0;
}
