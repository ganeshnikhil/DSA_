#include <stdio.h>

int linearSearch(int arr[], int size, int target) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == target)
            return i;  // Target found, return index
    }
    return -1;  // Target not found
}

int main() {
    int n, target;
    
    // Taking array size input
    printf("Enter number of elements in array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    // Taking array elements input
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    
    // Taking target input
    printf("Enter the target element: ");
    scanf("%d", &target);
    
    // Performing linear search
    int result = linearSearch(arr, n, target);
    
    // Output result
    if (result != -1)
        printf("Element found at index %d\n", result);
    else
        printf("Element not found in the array\n");

    return 0;
}
