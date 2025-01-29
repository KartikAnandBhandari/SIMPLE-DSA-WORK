#include <stdio.h>
#include <float.h>

void findSmallestTwo(float arr[], int size, float *smallest, float *second_smallest) {
    if (size < 2) {
        printf("Array must contain at least two elements\n");
        return;
    }
    
    *smallest = FLT_MAX;
    *second_smallest = FLT_MAX;
    
    for (int i = 0; i < size; i++) {
        if (arr[i] < *smallest) {
            *second_smallest = *smallest;
            *smallest = arr[i];
        } else if (arr[i] < *second_smallest && arr[i] != *smallest) {
            *second_smallest = arr[i];
        }
    }
    
    if (*second_smallest == FLT_MAX) {
        printf("No second smallest element found (all elements may be identical)\n");
        return;
    }
}

int main() {
    float arr[] = {3.4, 1.2, 5.6, 2.3, 1.1, 4.8};
    int size = sizeof(arr) / sizeof(arr[0]);
    float smallest, second_smallest;
    
    findSmallestTwo(arr, size, &smallest, &second_smallest);
    
    printf("Smallest: %.2f\n", smallest);
    printf("Second Smallest: %.2f\n", second_smallest);
    
    return 0;
}
