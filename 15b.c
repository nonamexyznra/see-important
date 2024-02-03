/*

Write a C program to print pattern
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5


*/


#include <stdio.h>

int main() {
    int rows;

    // Input number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    // Loop to print the pattern
    for (int i = 1; i <= rows; i++) {
        for (int j = 1; j <= i; j++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}
