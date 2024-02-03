// C program to find an element using linear search with the help of a function:

#include <stdio.h>

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int key;

    printf("Enter the element to search: ");
    scanf("%d", &key);

    int index = linearSearch(arr, size, key);

    if (index != -1) {
        printf("Element found at index %d.\n", index);
    } else {
        printf("Element not found.\n");
    }

    return 0;
}
