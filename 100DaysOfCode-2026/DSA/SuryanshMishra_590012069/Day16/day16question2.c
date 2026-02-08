#include <stdio.h>

// Function to count occurrences of target element in array
int countOccurrences(int arr[], int size, int target) {
    int count = 0;  // Initialize counter to 0
    
    // Traverse through each element in the array
    for (int i = 0; i < size; i++) {
        // If current element matches target, increment counter
        if (arr[i] == target) {
            count++;
        }
    }
    
    return count;  // Return the total count
}

int main() {
    // Test case 1: Array: [1, 2, 3, 2, 2, 4], Target: 2
    int arr1[] = {1, 2, 3, 2, 2, 4};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int target1 = 2;
    int result1 = countOccurrences(arr1, size1, target1);
    printf("Test 1 - Array: [1, 2, 3, 2, 2, 4], Target: %d\n", target1);
    printf("Occurrences: %d\n\n", result1);

    // Test case 2: Array: [5, 1, 5, 5, 3, 5, 7], Target: 5
    int arr2[] = {5, 1, 5, 5, 3, 5, 7};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int target2 = 5;
    int result2 = countOccurrences(arr2, size2, target2);
    printf("Test 2 - Array: [5, 1, 5, 5, 3, 5, 7], Target: %d\n", target2);
    printf("Occurrences: %d\n\n", result2);

    // Test case 3: Array: [10, 20, 30, 10, 40], Target: 10
    int arr3[] = {10, 20, 30, 10, 40};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int target3 = 10;
    int result3 = countOccurrences(arr3, size3, target3);
    printf("Test 3 - Array: [10, 20, 30, 10, 40], Target: %d\n", target3);
    printf("Occurrences: %d\n", result3);

    return 0;
}