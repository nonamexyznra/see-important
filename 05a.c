// C program to do the addition of two matrices using functions

#include <stdio.h>

void addMatrices(int mat1[3][3], int mat2[3][3], int result[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void displayMatrix(int mat[3][3]) {
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[3][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    int mat2[3][3] = {{9, 8, 7}, {6, 5, 4}, {3, 2, 1}};
    int result[3][3];

    addMatrices(mat1, mat2, result);

    printf("Matrix 1:\n");
    displayMatrix(mat1);

    printf("\nMatrix 2:\n");
    displayMatrix(mat2);

    printf("\nSum of Matrices:\n");
    displayMatrix(result);

    return 0;
}
