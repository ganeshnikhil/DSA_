#include <stdio.h>

int findPeak(int* nums, int low, int high, int n) {
    int mid = low + (high - low) / 2;

    // Check if mid is a peak
    if ((mid == 0 || nums[mid - 1] <= nums[mid]) &&
        (mid == n - 1 || nums[mid] >= nums[mid + 1])) {
        return mid;
    }

    // If left neighbor is greater, then peak must be on left side
    if (mid > 0 && nums[mid - 1] > nums[mid]) {
        return findPeak(nums, low, mid - 1, n);
    }

    // Else the peak lies on right side
    return findPeak(nums, mid + 1, high, n);
}

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int nums[n];
    printf("Enter %d elements of the array:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &nums[i]);
    }

    int peakIndex = findPeak(nums, 0, n - 1, n);

    printf("You entered: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", nums[i]);
    }
    printf("\n");

    printf("Peak element found at index: %d (Value: %d)\n", peakIndex, nums[peakIndex]);

    return 0;
}
