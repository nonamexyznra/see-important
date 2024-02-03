// 1a) C program to find the min and max of a given 1D array using functions



#include <stdio.h>

void findMinMax(int arr[], int size, int *min, int *max) {
    *min = *max = arr[0];

    for (int i = 1; i < size; i++) {
        if (arr[i] < *min) {
            *min = arr[i];
        }
        if (arr[i] > *max) {
            *max = arr[i];
        }
    }
}

int main() {
    int arr[] = {5, 2, 8, 3, 1};
    int size = sizeof(arr) / sizeof(arr[0]);
    int min, max;

    findMinMax(arr, size, &min, &max);

    printf("Minimum: %d\nMaximum: %d\n", min, max);

    return 0;
}
