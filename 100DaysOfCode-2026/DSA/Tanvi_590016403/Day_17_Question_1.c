#include <stdio.h>

// 1. Binary Search Function
int binarySearch(int arr[], int n, int target) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return -1; // Not found
}

// 2. First Occurrence in Sorted Array with Duplicates
int firstOccurrence(int arr[], int n, int target) {
    int left = 0, right = n - 1, result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target) {
            result = mid;
            right = mid - 1; // keep searching on the left side
        } else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }

    return result;
}

// 3. Integer Square Root using Binary Search
int integerSqrt(int n) {
    if (n < 0)
        return -1; // Square root of negative number is undefined for integers

    int left = 0, right = n, ans = 0;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if ((long long)mid * mid <= n) {
            ans = mid;
            left = mid + 1;
        } else
            right = mid - 1;
    }

    return ans;
}

int main() {
    // Test 1: Binary Search
    int arr1[] = {1, 3, 5, 7, 9, 11};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Binary Search Output: %d\n", binarySearch(arr1, size1, 7));  // Output: 3

    // Test 2: First Occurrence
    int arr2[] = {5, 7, 7, 8, 8, 8, 10};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("First Occurrence Output: %d\n", firstOccurrence(arr2, size2, 8));  // Output: 3

    // Test 3: Integer Square Root
    int number = 27;
    printf("Integer Square Root Output: %d\n", integerSqrt(number));  // Output: 5

    return 0;
}
