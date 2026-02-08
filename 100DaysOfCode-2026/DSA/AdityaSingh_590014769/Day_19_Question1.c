// Problem 1: Search in Rotated Sorted Array
// -----------------------------------------------
// Perform binary search on a rotated sorted array to find a target's index.
// Return -1 if the target is not found.

#include <stdio.h>

int func(int arr[], int n, int target) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == target)
            return mid;

        if (arr[left] <= arr[mid]) {
            if (target >= arr[left] && target < arr[mid])
                right = mid - 1;
            else
                left = mid + 1;
        } else {
            if (target > arr[mid] && target <= arr[right])
                left = mid + 1;
            else
                right = mid - 1;
        }
    }
    return -1;
}

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    int result = func(arr, n, target);
    printf("Target index: %d\n", result);
    return 0;
}
