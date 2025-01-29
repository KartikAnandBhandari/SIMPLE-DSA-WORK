#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void bubbleSort(int arr[], int size) {
    int i, j, temp;
    int swapped;

    // Perform bubble sort
    for (i = 0; i < size - 1; i++) {
        swapped = 0;

        // Last i elements are already sorted
        for (j = 0; j < size - 1 - i; j++) {
            if (arr[j] > arr[j + 1]) {
                // Swap the elements
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;

                swapped = 1;
            }
        }

        // If no elements were swapped, the array is already sorted
        if (swapped == 0) {
            break;  // Exit the loop early if no swaps were made
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
    int n;

    // Seed the random number generator
    srand(time(0));

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &n);

    // Create an array of random numbers
    int arr[n];
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % 100;  // Random numbers between 0 and 99
    }

    // Print the original array
    printf("Original array: \n");
    printArray(arr, n);

    // Perform bubble sort
    bubbleSort(arr, n);

    // Print the sorted array
    printf("Sorted array: \n");
    printArray(arr, n);

    return 0;
}
