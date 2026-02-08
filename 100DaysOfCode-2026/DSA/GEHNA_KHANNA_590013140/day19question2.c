#include <stdio.h>

int findPeak(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int leftOK = (mid == 0 || arr[mid] >= arr[mid - 1]);
        int rightOK = (mid == n - 1 || arr[mid] >= arr[mid + 1]);

        if (leftOK && rightOK)
            return mid;

        if (mid > 0 && arr[mid - 1] > arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}
int main() {
    int n;

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int peakIndex = findPeak(arr, n);
    printf("Peak element found at index: %d (value = %d)\n", peakIndex, arr[peakIndex]);

    return 0;
}



