//C program to find if a given number is divisible by 5 or 7

#include <stdio.h>

int main() {
    int number;

    // Input
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is divisible by 5 or 7
    if (number % 5 == 0 || number % 7 == 0) {
        printf("%d is divisible by 5 or 7.\n", number);
    } else {
        printf("%d is not divisible by 5 or 7.\n", number);
    }

    return 0;
}
