//C program to print alternative elements of a 1D array using functions

#include <stdio.h>

void printAlternate(int arr[], int size) {
    for (int i = 0; i < size; i += 2) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    printAlternate(arr, size);

    return 0;
}
