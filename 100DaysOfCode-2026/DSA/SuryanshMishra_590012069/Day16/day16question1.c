#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) {
    // Traverse through each element in the array
    for (int i = 0; i < size; i++) {
        // If target element is found, return its index
        if (arr[i] == target) {
            return i;
        }
    }
    // If target element is not found, return -1
    return -1;
}

int main() {
    // Test case 1: Array: [10, 20, 30, 40, 50], Target: 30
    int arr1[] = {10, 20, 30, 40, 50};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 30;
    int result1 = linearSearch(arr1, size1, target1);
    printf("Test 1 - Array: [10, 20, 30, 40, 50], Target: %d\n", target1);
    printf("Result: %d\n\n", result1);

    // Test case 2: Array: [1, 5, 9, 3, 7], Target: 8
    int arr2[] = {1, 5, 9, 3, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 8;
    int result2 = linearSearch(arr2, size2, target2);
    printf("Test 2 - Array: [1, 5, 9, 3, 7], Target: %d\n", target2);
    printf("Result: %d\n\n", result2);

    // Test case 3: Array: [15, 25, 35, 45], Target: 25
    int arr3[] = {15, 25, 35, 45};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 25;
    int result3 = linearSearch(arr3, size3, target3);
    printf("Test 3 - Array: [15, 25, 35, 45], Target: %d\n", target3);
    printf("Result: %d\n", result3);

    return 0;
}