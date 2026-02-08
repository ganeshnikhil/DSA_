#include <stdio.h>

// Function to find the first occurrence of the target element
int firstOccurrence(int arr[], int size, int target) 
{
    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) 
    {
        int mid = left + (right - left) / 2;

        // If target is found, record index and move to left half
        if (arr[mid] == target) 
        {
            result = mid;
            right = mid - 1;  // Keep searching in left half
        } 
        else if (arr[mid] < target) 
        {
            left = mid + 1;   // Move to right half
        } 
        else 
        {
            right = mid - 1;  // Move to left half
        }
    }

    return result;
}

int main() 
{
    int n, target, result;

    // Input number of elements
    printf("Enter number of elements in sorted array: ");
    scanf("%d", &n);

    int arr[n];

    // Input sorted array (may contain duplicates)
    printf("Enter %d sorted elements (can have duplicates):\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input target to search
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Call function to find first occurrence
    result = firstOccurrence(arr, n, target);

    if (result != -1)
        printf("First occurrence of %d is at index %d.\n", target, result);
    else
        printf("Element %d not found in the array.\n", target);

    return 0;
}
