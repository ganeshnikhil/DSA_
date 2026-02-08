1- The currentSum starts from 0 and resets to 0 if it becomes negative.
This works only if there is at least one non-negative number in the array.
If all elements are negative, currentSum keeps resetting to 0, and maxSum is never updated properly.

2- For an array like {-3, -2, -1, -4}, the maximum subarray sum is -1 (a subarray containing just that element).
But in the current implementation:
maxSum = -3 (initially)
Each currentSum becomes negative and resets to 0, so maxSum never gets updated to -1

3- maxSum = -3
Iteration 1: currentSum = -3 → reset to 0
Iteration 2: currentSum = -2 → reset to 0
Iteration 3: currentSum = -1 → reset to 0
Iteration 4: currentSum = -4 → reset to 0
At no point is maxSum updated (as currentSum never exceeds -3), so the function returns:

4- To fix this, initialize currentSum with the first element and never force-reset it to 0 unless it's part of a strategy to skip entirely negative sequences (not helpful when all are negative)
 int maxSubarraySum(int nums[], int n) 
{
    int maxSum = nums[0];
    int currentSum = nums[0];

    for (int i = 1; i < n; i++) 
    {
        currentSum = (nums[i] > currentSum + nums[i]) ? nums[i] : currentSum + nums[i];
        maxSum = (currentSum > maxSum) ? currentSum : maxSum;
    }
    return maxSum;
  }
