#include <stdio.h>

// Q1: Identify the bug or logical flaw in this code
// A1: The original code initialized currentSum to 0, which fails for all-negative arrays. It should be initialized to the first element of the array.

int maxSubarraySum(int nums[], int n) 
{
    // Q2: Consider cases where the array contains all negative numbers
    // A2: If all numbers are negative, initializing currentSum to 0 causes the function to always reset currentSum to 0, and maxSum remains the first element. The correct approach is to start both with nums[0].
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        if (currentSum > maxSum) 
        {
            maxSum = currentSum;
        }
    }
    return maxSum;
}

int main() {
    int arr[] = {-3, -2, -1, -4};
    int n = sizeof(arr) / sizeof(arr[0]);
    // Q3: What would the function return for the input: int arr[] = {-3, -2, -1, -4};
    // A3: The function will return -1, which is the maximum subarray sum (the single element -1).
    printf("%d\n", maxSubarraySum(arr, n)); // Output: -1
    // Q4: Suggest a corrected version of this function that works correctly for all input arrays, including those with all negative elements
    // A4: The corrected version is implemented above, initializing both maxSum and currentSum to nums[0] and starting the loop from i = 1.
    return 0;
}