// C program to check if a given number is divisible by 3 and 5

#include <stdio.h>

int isDivisibleBy3And5(int num) {
    return (num % 3 == 0) && (num % 5 == 0);
}

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (isDivisibleBy3And5(number)) {
        printf("%d is divisible by 3 and 5.\n", number);
    } else {
        printf("%d is not divisible by 3 and 5.\n", number);
    }

    return 0;
}
