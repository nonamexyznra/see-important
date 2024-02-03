//C program to find the smallest among two numbers

#include <stdio.h>

int main() {
    // Declare variables
    int num1, num2;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);

    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Check and print the smallest number
    if (num1 < num2) {
        printf("The smallest number is: %d\n", num1);
    } else {
        printf("The smallest number is: %d\n", num2);
    }

    return 0;
}
