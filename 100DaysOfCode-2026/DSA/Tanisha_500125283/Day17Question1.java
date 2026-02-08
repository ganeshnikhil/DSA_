// Problem Statement: Implement the binary search algorithm to find a target element in a sorted array. Binary 
// search is much more efficient than linear search for sorted data because it eliminates half of 
// the remaining elements in each step. Start by checking the middle element, then decide 
// whether to search in the left or right half based on whether the target is smaller or larger than 
// the middle element. Return the index of the target element if found, or -1 if not present.
// Task: Implement binary search for finding elements in sorted arrays. 
// Examples Input: Array: [1, 3, 5, 7, 9, 11], Target: 7 
// Output: 3


package DSA.Tanisha_500125283;

public class Day17Question1 {
    public static int BinarySearch(int[] arr, int target) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        int[] array = { 1, 3, 5, 7, 9, 11 };
        int target = 7;

        int result = BinarySearch(array, target);
        System.out.println("Output: " + result);
    }
}
