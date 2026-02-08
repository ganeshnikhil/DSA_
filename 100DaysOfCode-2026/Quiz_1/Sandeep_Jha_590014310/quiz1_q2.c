// The following function is supposed to return the maximum element in an array:
//
// int findMax(int arr[], int n) 
// {
//     int max;
//     for (int i = 0; i < n; i++) 
//     {
//         if (arr[i] > max) 
//        {
//             max = arr[i];
//         }
//     }
//     return max;
// }

// Q1: Identify the bug in the above implementation
// A1: The variable 'max' is uninitialized. Its value is indeterminate, leading to undefined behavior.

// Q2: What kind of incorrect behavior or result might it produce?
// A2: Since 'max' is not initialized, the comparison 'arr[i] > max' may always be false (if 'max' starts as a very large garbage value), or it may produce unpredictable results, returning an incorrect maximum or even a random value.

// Q3: Rewrite the corrected version of the function
#include <stdio.h>

int findMax(int arr[], int n) {
    int max = arr[0]; // Initialize max to the first element
    for (int i = 1; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    printf("%d\n", findMax(arr, n)); // Output: 9
    return 0;
}
