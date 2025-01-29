#include <stdio.h>

#define MAX 10

// Function to find the transpose of a matrix
void transposeMatrix(int matrix[MAX][MAX], int transpose[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }
}

// Function to print the matrix
void printMatrix(int matrix[MAX][MAX], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int matrix[MAX][MAX] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };
    int transpose[MAX][MAX];
    int rows = 3, cols = 3;

    printf("Original Matrix:\n");
    printMatrix(matrix, rows, cols);

    // Call the function to find the transpose
    transposeMatrix(matrix, transpose, rows, cols);

    printf("\nTransposed Matrix:\n");
    printMatrix(transpose, cols, rows);

    return 0;
}
