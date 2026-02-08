#include <stdio.h>

void bubbleSort(int arr[], int n) {
    // Outer loop for number of passes
    for (int i = 0; i < n - 1; i++) {
        // Flag to check if any swapping occurred in this pass
        int swapped = 0;
        
        // Inner loop for comparing adjacent elements
        for (int j = 0; j < n - i - 1; j++) {
            // Compare adjacent elements
            if (arr[j] > arr[j + 1]) {
                // Swap if they are in wrong order
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
                swapped = 1;
            }
        }
        
        // If no swapping occurred, array is already sorted
        if (swapped == 0) {
            break;
        }
    }
}

void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]\n");
}

int main() {
    // Example 1
    int arr1[] = {5, 2, 8, 1, 9};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Input: ");
    printArray(arr1, size1);
    
    bubbleSort(arr1, size1);
    
    printf("Output: ");
    printArray(arr1, size1);
    printf("\n");
    
    // Example 2
    int arr2[] = {3, 7, 4, 1, 6, 2};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Input: ");
    printArray(arr2, size2);
    
    bubbleSort(arr2, size2);
    
    printf("Output: ");
    printArray(arr2, size2);
    printf("\n");
    
    // Example 3
    int arr3[] = {64, 34, 25, 12, 22, 11, 90};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Input: ");
    printArray(arr3, size3);
    
    bubbleSort(arr3, size3);
    
    printf("Output: ");
    printArray(arr3, size3);
    
    return 0;
}