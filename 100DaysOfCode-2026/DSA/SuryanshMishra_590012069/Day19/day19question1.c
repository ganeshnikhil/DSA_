#include <stdio.h>

int searchRotatedArray(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // If target is found at mid
        if (arr[mid] == target) {
            return mid;
        }
        
        // Check if left half is sorted
        if (arr[left] <= arr[mid]) {
            // Target is in the left sorted half
            if (target >= arr[left] && target < arr[mid]) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        }
        // Right half is sorted
        else {
            // Target is in the right sorted half
            if (target > arr[mid] && target <= arr[right]) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
    }
    
    return -1; // Target not found
}

int main() {
    // Test case 1
    int arr1[] = {4, 5, 6, 7, 0, 1, 2};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 0;
    
    printf("Array: [4, 5, 6, 7, 0, 1, 2], Target: 0\n");
    printf("Output: %d\n\n", searchRotatedArray(arr1, n1, target1));
    
    // Test case 2
    int target2 = 3;
    printf("Array: [4, 5, 6, 7, 0, 1, 2], Target: 3\n");
    printf("Output: %d\n\n", searchRotatedArray(arr1, n1, target2));
    
    // Test case 3
    int arr3[] = {11, 13, 15, 17, 19, 2, 3, 6, 7};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 6;
    
    printf("Array: [11, 13, 15, 17, 19, 2, 3, 6, 7], Target: 6\n");
    printf("Output: %d\n", searchRotatedArray(arr3, n3, target3));
    
    return 0;
}