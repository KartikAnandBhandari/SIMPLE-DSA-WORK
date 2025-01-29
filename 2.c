#include <stdio.h>

void insertElement(int arr[], int *n, int position, int element) {
    if (position < 1 || position > *n + 1) {
        printf("Invalid position for insertion.\n");
        return;
    }

    for (int i = *n - 1; i >= position - 1; i--) {
        arr[i + 1] = arr[i];
    }

    arr[position - 1] = element;
    (*n)++;
}

void deleteElement(int arr[], int *n, int position) {
    if (position < 1 || position > *n) {
        printf("Invalid position for deletion.\n");
        return;
    }

    for (int i = position - 1; i < *n - 1; i++) {
        arr[i] = arr[i + 1];
    }

    (*n)--;
}

int main() {
    int n, i, j, element;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int a1[50]; 

    printf("Enter %d elements for the array:\n", n);
    for (int k = 0; k < n; k++) {
        scanf("%d", &a1[k]);
    }

    printf("Enter the position to insert: ");
    scanf("%d", &i);
    printf("Enter the element to insert: ");
    scanf("%d", &element);

    insertElement(a1, &n, i, element);

    printf("Array after insertion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    printf("Enter the position to delete: ");
    scanf("%d", &j);

    deleteElement(a1, &n, j);

    printf("Array after deletion:\n");
    for (int k = 0; k < n; k++) {
        printf("%d ", a1[k]);
    }
    printf("\n");

    return 0;
}