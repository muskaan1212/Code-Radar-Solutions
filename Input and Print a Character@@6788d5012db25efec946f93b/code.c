#include <stdio.h>

int main() {
    char x;  // Declare a variable to store the input character
    
    // Ask the user for input
    printf("Enter a single character: ");
    
    // Take input using scanf
    scanf("%c", &x);  // Using "%c" to read a single character
    
    // Print the entered character
    printf("You entered: %c\n", x);  // Using "%c" to print the character
    
    return 0;
}
