#include <stdio.h>

int findPeakElement(int arr[], int n) {
    // Base case: single element
    if (n == 1) {
        return 0;
    }
    
    // Check if first element is peak
    if (arr[0] > arr[1]) {
        return 0;
    }
    
    // Check if last element is peak
    if (arr[n-1] > arr[n-2]) {
        return n-1;
    }
    
    // Binary search for peak element
    int left = 1, right = n - 2;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        
        // Check if mid is peak
        if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) {
            return mid;
        }
        
        // If left neighbor is greater, peak must be on left side
        if (arr[mid-1] > arr[mid]) {
            right = mid - 1;
        }
        // If right neighbor is greater, peak must be on right side
        else {
            left = mid + 1;
        }
    }
    
    return -1; // Should not reach here for valid input
}

int main() {
    // Test case 1
    int arr1[] = {1, 3, 20, 4, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    
    printf("Array: [1, 3, 20, 4, 1, 0]\n");
    printf("Peak element index: %d\n\n", findPeakElement(arr1, n1));
    
    // Test case 2
    int arr2[] = {1, 2, 1, 3, 5, 6, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    
    printf("Array: [1, 2, 1, 3, 5, 6, 4]\n");
    printf("Peak element index: %d\n\n", findPeakElement(arr2, n2));
    
    // Test case 3
    int arr3[] = {10, 20, 15, 2, 23, 90, 67};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    
    printf("Array: [10, 20, 15, 2, 23, 90, 67]\n");
    printf("Peak element index: %d\n", findPeakElement(arr3, n3));
    
    return 0;
}