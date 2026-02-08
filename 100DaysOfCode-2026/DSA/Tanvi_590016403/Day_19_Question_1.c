#include <stdio.h>
#include <stdbool.h>

// 1. Search in Rotated Sorted Array
int searchRotated(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target) return mid;

        // Check which half is sorted
        if (arr[left] <= arr[mid]) {
            // Left half is sorted
            if (arr[left] <= target && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            // Right half is sorted
            if (arr[mid] < target && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

// 2. Find Peak Element
int findPeak(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if (arr[mid] > arr[mid + 1])
            right = mid;
        else
            left = mid + 1;
    }
    return left; // Peak index
}

// 3. Search in 2D Matrix
bool searchMatrix(int matrix[3][3], int rows, int cols, int target) {
    int row = 0, col = cols - 1;
    while (row < rows && col >= 0) {
        if (matrix[row][col] == target)
            return true;
        else if (matrix[row][col] > target)
            col--;
        else
            row++;
    }
    return false;
}

// Main Function to Test All
int main() {
    // Problem 1: Rotated Sorted Array
    int arr1[] = {4, 5, 6, 7, 0, 1, 2};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 0;
    printf("Index of %d in rotated array: %d\n", target1, searchRotated(arr1, size1, target1));

    // Problem 2: Peak Element
    int arr2[] = {1, 3, 20, 4, 1, 0};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int peakIndex = findPeak(arr2, size2);
    printf("Peak element is %d at index %d\n", arr2[peakIndex], peakIndex);

    // Problem 3: Search in 2D Matrix
    int matrix[3][3] = {{1, 4, 7}, {2, 5, 8}, {3, 6, 9}};
    int target3 = 5;
    if (searchMatrix(matrix, 3, 3, target3))
        printf("Target %d found in 2D matrix.\n", target3);
    else
        printf("Target %d not found in 2D matrix.\n", target3);

    return 0;
}
