#include <stdio.h>

// Function to perform binary search
int binarySearch(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        // Checking if target is at mid
        if (arr[mid] == target)
            return mid;

        // If target greater, ignore left half
        if (arr[mid] < target)
            left = mid + 1;
        // If target smaller, ignore right half
        else
            right = mid - 1;
    }

    // Target not found
    return -1;
}

int main() 
{
    int n, target, result;

    // Input size of array
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array
    printf("Enter %d sorted elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input target to search
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Call binary search
    result = binarySearch(arr, n, target);

    if (result != -1)
        printf("Element found at index %d.\n", result);
    else
        printf("Element not found in the array.\n");

    return 0;
}
