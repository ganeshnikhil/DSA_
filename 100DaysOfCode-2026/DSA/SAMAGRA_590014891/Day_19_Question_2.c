#include <stdio.h>

int findPeakElement(int arr[], int n) {
    int low = 0, high = n - 1;

    while (low <= high) 
    {
        int mid = low + (high - low) / 2;

        int left = (mid == 0) || (arr[mid] >= arr[mid - 1]);
        int right = (mid == n - 1) || (arr[mid] >= arr[mid + 1]);

        if (left && right)
            return mid;
        else if (mid > 0 && arr[mid - 1] > arr[mid])
            high = mid - 1;
        else
            low = mid + 1;
    }

    return -1; 
}

int main() {
    int arr1[] = {1, 3, 20, 4, 1, 0};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);
    printf("Peak at index: %d\n", findPeakElement(arr1, n1));

    int arr2[] = {1, 2, 1, 3, 5, 6, 4};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);
    printf("Peak at index: %d\n", findPeakElement(arr2, n2));

    int arr3[] = {10, 20, 15, 2, 23, 90, 67};
    int n3 = sizeof(arr3) / sizeof(arr3[0]);
    printf("Peak at index: %d\n", findPeakElement(arr3, n3));

    return 0;
}
