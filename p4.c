#include <stdio.h>

int binarySearchDescending(int arr[], int size, int value) {
    int left = 0, right = size - 1;

    
    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == value) {
            return mid; 
        }

        if (arr[mid] > value) {
            left = mid + 1; 
        } else {
            right = mid - 1;  
        }
    }

    return -1; 
}

int main() {
    int arr[] = {90, 78, 56, 34, 23, 12, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

 
    printf("Enter the value to search for: ");
    scanf("%d", &value);

    int result = binarySearchDescending(arr, size, value);

    if (result != -1) {
        printf("Value %d found at index %d.\n", value, result);
    } else {
        printf("Value %d not found in the array.\n", value);
    }

    return 0;
}
