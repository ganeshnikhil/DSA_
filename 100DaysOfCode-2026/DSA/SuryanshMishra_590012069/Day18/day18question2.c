#include <stdio.h>

void insertionSort(int arr[], int n) {
    int i, key, j;
    
    // Start from the second element (index 1)
    for (i = 1; i < n; i++) {
        key = arr[i]; // Current element to be inserted
        j = i - 1;
        
        // Move elements greater than key to one position ahead
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        
        // Place key at its correct position
        arr[j + 1] = key;
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
    // Test case 1
    int arr1[] = {12, 11, 13, 5, 6};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input: ");
    printArray(arr1, n1);
    insertionSort(arr1, n1);
    printf("Output: ");
    printArray(arr1, n1);
    printf("\n");
    
    // Test case 2
    int arr2[] = {31, 41, 59, 26, 53};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Input: ");
    printArray(arr2, n2);
    insertionSort(arr2, n2);
    printf("Output: ");
    printArray(arr2, n2);
    printf("\n");
    
    // Test case 3
    int arr3[] = {4, 2, 7, 1, 3};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Input: ");
    printArray(arr3, n3);
    insertionSort(arr3, n3);
    printf("Output: ");
    printArray(arr3, n3);
    
    return 0;
}