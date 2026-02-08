#include <stdio.h>
#include <stdlib.h>
#include <time.h>

// Function to swap two elements
void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

// Partition function for quickselect
int partition(int arr[], int low, int high) {
    // Choose random pivot for better average performance
    int randomIndex = low + rand() % (high - low + 1);
    swap(&arr[randomIndex], &arr[high]);
    
    int pivot = arr[high];
    int i = low - 1;
    
    for (int j = low; j < high; j++) {
        if (arr[j] >= pivot) {  // For descending order
            i++;
            swap(&arr[i], &arr[j]);
        }
    }
    swap(&arr[i + 1], &arr[high]);
    return i + 1;
}

// Quickselect algorithm to find Kth largest element
int quickselect(int arr[], int low, int high, int k) {
    if (low <= high) {
        int pivotIndex = partition(arr, low, high);
        
        if (pivotIndex == k - 1) {
            return arr[pivotIndex];
        } else if (pivotIndex > k - 1) {
            return quickselect(arr, low, pivotIndex - 1, k);
        } else {
            return quickselect(arr, pivotIndex + 1, high, k);
        }
    }
    return -1;  // Error case
}

// Function to find Kth largest element
int findKthLargest(int arr[], int n, int k) {
    // Create a copy of array to avoid modifying original
    int* tempArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    
    int result = quickselect(tempArr, 0, n - 1, k);
    free(tempArr);
    return result;
}

// Alternative approach using sorting (simpler but less efficient)
int findKthLargestSimple(int arr[], int n, int k) {
    // Create a copy of array
    int* tempArr = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        tempArr[i] = arr[i];
    }
    
    // Sort in descending order using bubble sort
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (tempArr[j] < tempArr[j + 1]) {
                swap(&tempArr[j], &tempArr[j + 1]);
            }
        }
    }
    
    int result = tempArr[k - 1];
    free(tempArr);
    return result;
}

// Function to print array
void printArray(int arr[], int size) {
    printf("[");
    for (int i = 0; i < size; i++) {
        printf("%d", arr[i]);
        if (i < size - 1) printf(", ");
    }
    printf("]");
}

int main() {
    srand(time(NULL));  // Initialize random seed
    
    // Test case 1
    int arr1[] = {3, 2, 1, 5, 6, 4};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int k1 = 2;
    
    printf("Test Case 1:\n");
    printf("Array: ");
    printArray(arr1, n1);
    printf(", K: %d\n", k1);
    
    int result1 = findKthLargest(arr1, n1, k1);
    printf("Output: %d\n\n", result1);
    
    // Test case 2
    int arr2[] = {7, 10, 4, 3, 20, 15};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    int k2 = 3;
    
    printf("Test Case 2:\n");
    printf("Array: ");
    printArray(arr2, n2);
    printf(", K: %d\n", k2);
    
    int result2 = findKthLargest(arr2, n2, k2);
    printf("Output: %d\n\n", result2);
    
    // Test case 3
    int arr3[] = {1, 23, 12, 9, 30, 2, 50};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int k3 = 4;
    
    printf("Test Case 3:\n");
    printf("Array: ");
    printArray(arr3, n3);
    printf(", K: %d\n", k3);
    
    int result3 = findKthLargest(arr3, n3, k3);
    printf("Output: %d\n\n", result3);
    
    // Demonstrate both approaches
    printf("Verification using simple sorting approach:\n");
    printf("Test Case 1 (Simple): %d\n", findKthLargestSimple(arr1, n1, k1));
    printf("Test Case 2 (Simple): %d\n", findKthLargestSimple(arr2, n2, k2));
    printf("Test Case 3 (Simple): %d\n", findKthLargestSimple(arr3, n3, k3));
    
    return 0;
}