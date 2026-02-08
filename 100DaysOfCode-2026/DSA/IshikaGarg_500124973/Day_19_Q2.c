#include <stdio.h>

int findPeak(int arr[], int low, int high, int n) {
    int mid = (low + high) / 2;

    if ((mid == 0 || arr[mid - 1] <= arr[mid]) &&
        (mid == n - 1 || arr[mid + 1] <= arr[mid]))
        return mid;

    if (mid > 0 && arr[mid - 1] > arr[mid])
        return findPeak(arr, low, mid - 1, n);

    return findPeak(arr, mid + 1, high, n);
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeak(arr, 0, n - 1, n);
    printf("Output: %d\n", peakIndex); 

    return 0;
}
