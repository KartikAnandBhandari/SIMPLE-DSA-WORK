#include <stdio.h>

void multiplyMatrices(int *mat1, int *mat2, int *result, int rows1, int columns1, int rows2, int columns2) {
    for (int i = 0; i < rows1; i++)
        for (int j = 0; j < columns2; j++)
            for (int k = 0; k < columns1; k++)
                *(result + i * columns2 + j) += *(mat1 + i * columns1 + k) * *(mat2 + k * columns2 + j);
}

int main() {
    int rows1, columns1, rows2, columns2;

    printf("Enter the dimensions of the first matrix (rows columns): ");
    scanf("%d %d", &rows1, &columns1);

    printf("Enter the dimensions of the second matrix (rows columns): ");
    scanf("%d %d", &rows2, &columns2);

    if (columns1 != rows2) {
        printf("Matrix multiplication not possible.\n");
        return 1;
    }

    int mat1[rows1][columns1], mat2[rows2][columns2], result[rows1][columns2];

    printf("Enter elements for the first matrix:\n");
    for (int i = 0; i < rows1 * columns1; i++)
        scanf("%d", &((int *)mat1)[i]);

    printf("Enter elements for the second matrix:\n");
    for (int i = 0; i < rows2 * columns2; i++)
        scanf("%d", &((int *)mat2)[i]);

    multiplyMatrices(&mat1[0][0], &mat2[0][0], &result[0][0], rows1, columns1, rows2, columns2);

    printf("Product of matrices:\n");
    for (int i = 0; i < rows1; i++) {
        for (int j = 0; j < columns2; j++)
            printf("%d ", result[i][j]);
        printf("\n");
    }

    return 0;
}