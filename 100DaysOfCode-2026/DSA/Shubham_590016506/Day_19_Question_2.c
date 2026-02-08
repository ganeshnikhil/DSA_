#include <stdio.h>

int findPeakElement(int* nums, int size) {
    int left = 0, right = size - 1;
    while (left < right) {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[mid + 1])
            right = mid;
        else
            left = mid + 1;
    }
    return left;
}

int main() {
    int arr[] = {1, 2, 1, 3, 5, 6, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    int peakIndex = findPeakElement(arr, size);
    printf("Output: %d\n", peakIndex); 
    return 0;
}