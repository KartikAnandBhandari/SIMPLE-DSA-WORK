#include <stdio.h>

void calculateSum(int matrix[10][10], int rows, int columns) {
    int rowSum, colSum;

    printf("Sum of rows:\n");
    for (int i = 0; i < rows; i++) {
        rowSum = 0;
        for (int j = 0; j < columns; j++) {
            rowSum += matrix[i][j];
        }
        printf("Row %d: %d\n", i + 1, rowSum);
    }

    printf("\nSum of columns:\n");
    for (int j = 0; j < columns; j++) {
        colSum = 0;
        for (int i = 0; i < rows; i++) {
            colSum += matrix[i][j];
        }
        printf("Column %d: %d\n", j + 1, colSum);
    }
}

int main() {
    int matrix[10][10];
    int rows, columns;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);
    printf("Enter the number of columns: ");
    scanf("%d", &columns);

    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < columns; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    calculateSum(matrix, rows, columns);

    return 0;
}