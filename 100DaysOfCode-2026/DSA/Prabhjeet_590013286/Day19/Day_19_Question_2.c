// Problem 2: Peak Element
// Find index of any peak element: one greater than its neighbors.
// Use binary search for efficient local maximum detection.

#include <stdio.h>

int func(int arr[], int n) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;

        int leftVal = (mid == 0) ? -1 : arr[mid - 1];
        int rightVal = (mid == n - 1) ? -1 : arr[mid + 1];

        if (arr[mid] >= leftVal && arr[mid] >= rightVal)
            return mid;
        else if (leftVal > arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int peakIndex = func(arr, n);
    printf("Peak element index: %d\n", peakIndex);
    return 0;
}
