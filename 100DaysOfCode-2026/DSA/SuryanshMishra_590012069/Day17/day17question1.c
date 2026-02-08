#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0;
    int right = size - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;  // Avoid overflow
        
        if (arr[mid] == target) {
            return mid;  // Target found, return index
        }
        else if (arr[mid] < target) {
            left = mid + 1;  // Search right half
        }
        else {
            right = mid - 1;  // Search left half
        }
    }
    
    return -1;  // Target not found
}

int main() {
    // Test case 1
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 7;
    printf("Array: [1, 3, 5, 7, 9, 11], Target: %d\n", target1);
    printf("Output: %d\n\n", binarySearch(arr1, size1, target1));
    
    // Test case 2  
    int arr2[] = {2, 4, 6, 8, 10, 12, 14};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    printf("Array: [2, 4, 6, 8, 10, 12, 14], Target: %d\n", target2);
    printf("Output: %d\n\n", binarySearch(arr2, size2, target2));
    
    // Test case 3
    int arr3[] = {10, 20, 30, 40, 50};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 30;
    printf("Array: [10, 20, 30, 40, 50], Target: %d\n", target3);
    printf("Output: %d\n", binarySearch(arr3, size3, target3));
    
    return 0;
}