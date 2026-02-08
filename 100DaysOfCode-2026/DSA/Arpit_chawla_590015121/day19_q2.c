#include <stdio.h>

int findPeak(int arr[], int n) {
    int left = 0, right = n - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        int leftVal = (mid == 0) ? -2147483648 : arr[mid - 1];
        int rightVal = (mid == n - 1) ? -2147483648 : arr[mid + 1];

        if (arr[mid] >= leftVal && arr[mid] >= rightVal)
            return mid;

        if (leftVal > arr[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }

    return -1;
}

int main() {
    int arr[] = {1, 3, 20, 4, 1, 0};
    int n = sizeof(arr) / sizeof(arr[0]);

    int peakIndex = findPeak(arr, n);
    printf("%d\n", peakIndex);

    return 0;
}
