#include <stdio.h>
#include <stdlib.h>

// Function to merge two sorted arrays using two-pointer technique
int* mergeSortedArrays(int arr1[], int n1, int arr2[], int n2, int* mergedSize) {
    // Allocate memory for merged array
    int* merged = (int*)malloc((n1 + n2) * sizeof(int));
    *mergedSize = n1 + n2;
    
    int i = 0, j = 0, k = 0;
    
    // Merge arrays using two pointers
    while (i < n1 && j < n2) {
        if (arr1[i] <= arr2[j]) {
            merged[k++] = arr1[i++];
        } else {
            merged[k++] = arr2[j++];
        }
    }
    
    // Copy remaining elements from arr1
    while (i < n1) {
        merged[k++] = arr1[i++];
    }
    
    // Copy remaining elements from arr2
    while (j < n2) {
        merged[k++] = arr2[j++];
    }
    
    return merged;
}

// Function to print array
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
    int arr1_1[] = {1, 3, 5};
    int arr2_1[] = {2, 4, 6};
    int n1_1 = sizeof(arr1_1) / sizeof(arr1_1[0]);
    int n2_1 = sizeof(arr2_1) / sizeof(arr2_1[0]);
    
    printf("Test Case 1:\n");
    printf("Array1: ");
    printArray(arr1_1, n1_1);
    printf("Array2: ");
    printArray(arr2_1, n2_1);
    
    int mergedSize1;
    int* merged1 = mergeSortedArrays(arr1_1, n1_1, arr2_1, n2_1, &mergedSize1);
    
    printf("Output: ");
    printArray(merged1, mergedSize1);
    printf("\n");
    
    // Test case 2
    int arr1_2[] = {1, 5, 9, 10};
    int arr2_2[] = {2, 3, 8, 13};
    int n1_2 = sizeof(arr1_2) / sizeof(arr1_2[0]);
    int n2_2 = sizeof(arr2_2) / sizeof(arr2_2[0]);
    
    printf("Test Case 2:\n");
    printf("Array1: ");
    printArray(arr1_2, n1_2);
    printf("Array2: ");
    printArray(arr2_2, n2_2);
    
    int mergedSize2;
    int* merged2 = mergeSortedArrays(arr1_2, n1_2, arr2_2, n2_2, &mergedSize2);
    
    printf("Output: ");
    printArray(merged2, mergedSize2);
    printf("\n");
    
    // Test case 3
    int arr1_3[] = {10, 30, 50};
    int arr2_3[] = {20, 40, 60, 70};
    int n1_3 = sizeof(arr1_3) / sizeof(arr1_3[0]);
    int n2_3 = sizeof(arr2_3) / sizeof(arr2_3[0]);
    
    printf("Test Case 3:\n");
    printf("Array1: ");
    printArray(arr1_3, n1_3);
    printf("Array2: ");
    printArray(arr2_3, n2_3);
    
    int mergedSize3;
    int* merged3 = mergeSortedArrays(arr1_3, n1_3, arr2_3, n2_3, &mergedSize3);
    
    printf("Output: ");
    printArray(merged3, mergedSize3);
    
    // Free allocated memory
    free(merged1);
    free(merged2);
    free(merged3);
    
    return 0;
}