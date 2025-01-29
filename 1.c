#include <stdio.h>

int array_sum_recursive(int arr[], int index, int size) {
    if (index == size) {
        return 0;
    } else {
        return arr[index] + array_sum_recursive(arr, index + 1, size);
    }
}

int main() {
    int n;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int my_array[n];

    for (int i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &my_array[i]);
    }

    int result = array_sum_recursive(my_array, 0, n);

    printf("Sum of array elements: %d\n", result);

}