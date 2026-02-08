#include <stdio.h>

// Function to perform linear search
int linearSearch(int arr[], int size, int target) 
{
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] == target) 
        {
            return i;  // Target found, return index
        }
    }
    return -1;  // Target not found
}

int main() 
{
    int n, target;

    // Input array size
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    // Input array elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) 
    {
        scanf("%d", &arr[i]);
    }

    // Input the target element to search for
    printf("Enter the target element to search: ");
    scanf("%d", &target);

    // Perform linear search
    int result = linearSearch(arr, n, target);

    if (result != -1) 
    {
        printf("Target found at index %d.\n", result);
    } 
    else 
    {
        printf("Target not found in the array.\n");
    }

    return 0;
}
