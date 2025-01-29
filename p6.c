#include <stdio.h>

void selectionSortDescending(int arr[], int size) {
    int i, j, maxIdx, temp;

    // Perform selection sort in descending order
    for (i = 0; i < size - 1; i++) {
        maxIdx = i;

        // Find the maximum element in the unsorted part of the array
        for (j = i + 1; j < size; j++) {
            if (arr[j] > arr[maxIdx]) {
                maxIdx = j;
            }
        }

        // Swap the found maximum element with the first element of the unsorted part
        if (maxIdx != i) {
            temp = arr[i];
            arr[i] = arr[maxIdx];
            arr[maxIdx] = temp;
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int MX;

    // Input the number of salespersons (MX)
    printf("Enter the number of salespersons: ");
    scanf("%d", &MX);

    // Create an array to store sales amounts
    int sales[MX];

    // Input sales amounts for each salesperson
    printf("Enter the sales amounts for %d salespersons:\n", MX);
    for (int i = 0; i < MX; i++) {
        printf("Salesperson %d: ", i + 1);
        scanf("%d", &sales[i]);
    }

    // Print the original sales amounts
    printf("\nOriginal sales amounts:\n");
    printArray(sales, MX);

    // Perform selection sort in descending order
    selectionSortDescending(sales, MX);

    // Print the sales amounts in descending order
    printf("\nSales amounts in descending order:\n");
    printArray(sales, MX);

    return 0;
}
