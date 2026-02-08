#include <stdio.h>

// Function to perform search in rotated sorted array
int search(int arr[], int n, int target) 
{
    int low = 0, high = n - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        if (arr[mid] == target)
            return mid;

        // Checking if left half is sorted
        if (arr[low] <= arr[mid]) 
        {
            if (arr[low] <= target && target < arr[mid])
                high = mid - 1; // Target is in left half
            else
                low = mid + 1; // Target is in right half
        }
        // Otherwise, right half must be sorted
        else {
            if (arr[mid] < target && target <= arr[high])
                low = mid + 1; // Target is in right half
            else
                high = mid - 1; // Target is in left half
        }
    }

    return -1; // Target not found
}

int main() 
{
    int n, target;

    printf("Enter number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the rotated sorted array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter the target to search for: ");
    scanf("%d", &target);

    int result = search(arr, n, target);

    if (result != -1)
        printf("Target %d found at index %d.\n", target, result);
    else
        printf("Target %d not found in the array.\n", target);

    return 0;
}
