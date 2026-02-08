#include <stdio.h>
#include <stdlib.h>

// Comparison function for qsort
int compare(const void *a, const void *b) {
    int int_a = *(const int*)a;
    int int_b = *(const int*)b;
    
    if (int_a < int_b) return -1;
    else if (int_a > int_b) return 1;
    else return 0;
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
    int arr1[] = {64, 34, 25, 12, 22, 11, 90};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Input: ");
    printArray(arr1, size1);
    
    qsort(arr1, size1, sizeof(int), compare);
    
    printf("Output: ");
    printArray(arr1, size1);
    printf("\n");
    
    // Example 2
    int arr2[] = {5, 2, 8, 6, 1, 9, 4};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Input: ");
    printArray(arr2, size2);
    
    qsort(arr2, size2, sizeof(int), compare);
    
    printf("Output: ");
    printArray(arr2, size2);
    printf("\n");
    
    // Example 3
    int arr3[] = {100, 50, 25, 75};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Input: ");
    printArray(arr3, size3);
    
    qsort(arr3, size3, sizeof(int), compare);
    
    printf("Output: ");
    printArray(arr3, size3);
    
    return 0;
}