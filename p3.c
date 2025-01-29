#include <stdio.h>

void searchOccurrences(int arr[], int size, int value) {
    int count = 0;
    printf("Value %d found at positions: ", value);

    
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            printf("%d ", i);  
            count++;
        }
    }

    if (count > 0) {
        printf("\nNumber of occurrences of %d: %d\n", value, count);
    } else {
     
       printf("\nValue %d not found in the array.\n", value);
    }
}

int main() {
    int arr[] = {12, 34, 56, 34, 89, 34, 90};
    int size = sizeof(arr) / sizeof(arr[0]);
    int value;

    printf("Enter the value to search for: ");
    scanf("%d", &value);

   
    searchOccurrences(arr, size, value);

    return 0;
}
