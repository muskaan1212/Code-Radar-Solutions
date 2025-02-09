#include <stdio.h>

int main() {
    char x;
    printf("Enter a character: ");
    scanf("%c", &x);  // Getting user input for the character

    if(x == 'A') {
        printf("You entered: A");
    }
    else if(x == 'Z') {
        printf("You entered: Z");
    }
    return 0;
}

    
