#include <stdio.h>

void selectionSort(int arr[], int n) {
    int i, j, minIdx, temp;
    
    // One by one move boundary of unsorted subarray
    for (i = 0; i < n - 1; i++) {
        // Find the minimum element in remaining unsorted array
        minIdx = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        
        // Swap the found minimum element with the first element
        if (minIdx != i) {
            temp = arr[minIdx];
            arr[minIdx] = arr[i];
            arr[i] = temp;
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
    // Test case 1
    int arr1[] = {29, 10, 14, 37, 13};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Input: ");
    printArray(arr1, n1);
    selectionSort(arr1, n1);
    printf("Output: ");
    printArray(arr1, n1);
    printf("\n");
    
    // Test case 2
    int arr2[] = {64, 25, 12, 22, 11};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Input: ");
    printArray(arr2, n2);
    selectionSort(arr2, n2);
    printf("Output: ");
    printArray(arr2, n2);
    printf("\n");
    
    // Test case 3
    int arr3[] = {5, 3, 8, 1, 6};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Input: ");
    printArray(arr3, n3);
    selectionSort(arr3, n3);
    printf("Output: ");
    printArray(arr3, n3);
    
    return 0;
}