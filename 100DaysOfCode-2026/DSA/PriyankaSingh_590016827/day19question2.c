#include <stdio.h>

// Function to find a peak element using binary search
int findPeak(int arr[], int low, int high, int n) 
{
    int mid = low + (high - low) / 2;

    // Checking if mid is a peak
    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    // If left neighbor is greater, a peak lies on the left
    else if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeak(arr, low, mid - 1, n);

    // Else the peak lies on the right
    else
        return findPeak(arr, mid + 1, high, n);
}

int main() 
{
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int peakIndex = findPeak(arr, 0, n - 1, n);
    printf("Peak element found at index %d with value %d.\n", peakIndex, arr[peakIndex]);

    return 0;
}
