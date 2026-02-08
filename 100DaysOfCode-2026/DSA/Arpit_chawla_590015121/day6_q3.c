#include <stdio.h>

int longestConsecutiveIncreasingSubarray(int nums[], int size) {
    if (size == 0) return 0;

    int maxLen = 1;
    int currentLen = 1;

    for (int i = 1; i < size; i++) {
        if (nums[i] == nums[i - 1] + 1) {
            currentLen++;
            if (currentLen > maxLen) {
                maxLen = currentLen;
            }
        } else {
            currentLen = 1;
        }
    }

    return maxLen;
}

int main() {
    int nums[] = {1, 2, 3, 5, 6, 7, 8, 2, 3};
    int size = sizeof(nums) / sizeof(nums[0]);

    int result = longestConsecutiveIncreasingSubarray(nums, size);
    printf("Length of longest consecutive increasing subarray: %d\n", result);

    return 0;
}
