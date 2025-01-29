#include <stdio.h>

int linearSearch(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n, key;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int myArray[n];

    printf("Enter %d elements for the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &myArray[i]);
    }

    printf("Enter the number to search: ");
    scanf("%d", &key);

    int result = linearSearch(myArray, n, key);

    if (result != -1) {
        printf("%d found at index %d.\n", key, result);
    } else {
        printf("%d not found in the array.\n", key);
    }

    return 0;
}
