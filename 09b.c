#include <stdio.h>

// Function to calculate the sum of first n natural numbers
int calculateSum(int n) {
    int sum = 0;
    // Loop through numbers from 1 to n and accumulate the sum
    for (int i = 1; i <= n; i++) {
        sum += i;
    }
    // Return the calculated sum
    return sum;
}

// Main function
int main() {
    int n;

    // Input the value of n from the user
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Call the function to calculate the sum and store the result
    int result = calculateSum(n);

    // Display the result
    printf("Sum of first %d natural numbers is: %d\n", n, result);

    // Return 0 to indicate successful execution of the program
    return 0;
}
