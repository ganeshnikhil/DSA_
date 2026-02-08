#include <stdio.h>

// Function to find the maximum element in an array
int findMaximum(int arr[], int size) {
    // Initialize max with the first element of the array
    int max = arr[0];
    
    // Traverse through remaining elements starting from index 1
    for (int i = 1; i < size; i++) {
        // If current element is greater than max, update max
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    
    return max;  // Return the maximum element found
}

int main() {
    // Test case 1: [3, 7, 1, 9, 4, 6]
    int arr1[] = {3, 7, 1, 9, 4, 6};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);
    int result1 = findMaximum(arr1, size1);
    printf("Test 1 - Array: [3, 7, 1, 9, 4, 6]\n");
    printf("Maximum element: %d\n\n", result1);

    // Test case 2: [-5, -2, -8, -1, -3]
    int arr2[] = {-5, -2, -8, -1, -3};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);
    int result2 = findMaximum(arr2, size2);
    printf("Test 2 - Array: [-5, -2, -8, -1, -3]\n");
    printf("Maximum element: %d\n\n", result2);

    // Test case 3: [100, 250, 75, 300, 150]
    int arr3[] = {100, 250, 75, 300, 150};
    int size3 = sizeof(arr3) / sizeof(arr3[0]);
    int result3 = findMaximum(arr3, size3);
    printf("Test 3 - Array: [100, 250, 75, 300, 150]\n");
    printf("Maximum element: %d\n", result3);

    return 0;
}