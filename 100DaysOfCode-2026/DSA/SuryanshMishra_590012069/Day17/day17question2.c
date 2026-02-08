#include <stdio.h>

int findFirstOccurrence(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    int result = -1;  // Store the first occurrence index
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        if (arr[mid] == target) {
            result = mid;  // Store current occurrence
            right = mid - 1;  // Continue searching in left half for first occurrence
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search right half
        }
        else {
            right = mid - 1;  // Search left half
        }
    }
    
    return result;
}

int main() {
    // Test case 1
    int arr1[] = {1, 2, 2, 2, 3, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 2;
    printf("Array: [1, 2, 2, 2, 3, 4], Target: %d\n", target1);
    printf("Output: %d\n\n", findFirstOccurrence(arr1, size1, target1));
    
    // Test case 2
    int arr2[] = {5, 7, 7, 8, 8, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 8;
    printf("Array: [5, 7, 7, 8, 8, 8, 10], Target: %d\n", target2);
    printf("Output: %d\n\n", findFirstOccurrence(arr2, size2, target2));
    
    // Test case 3
    int arr3[] = {1, 1, 1, 2, 3, 3};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 1;
    printf("Array: [1, 1, 1, 2, 3, 3], Target: %d\n", target3);
    printf("Output: %d\n", findFirstOccurrence(arr3, size3, target3));
    
    return 0;
}