// Problem Statement: You have a sorted array that has been rotated at some unknown pivot point. For example, 
// the array [0,1,2,4,5,6,7] might become [4,5,6,7,0,1,2] after rotation. Write a function to search 
// for a target value in this rotated sorted array and return its index. If the target is not found, 
// return -1. The challenge is to maintain the efficiency of binary search even though the array 
// is no longer fully sorted in the traditional sens
// Task: Implement efficient search in rotated sorted arrays using binary search principles. 
// Examples Input: Array: [4, 5, 6, 7, 0, 1, 2], Target: 0 
// Output: 4 


package DSA.Tanisha_500125283;
public class Day19Qusetion1 {

    public static int search(int[] nums, int target) {
        int left = 0;
        int right = nums.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            if (nums[mid] == target) {
                return mid;
            }
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid]) {
                    right = mid - 1; 
                } else {
                    left = mid + 1; 
                }
            }

            
            else {
                if (nums[mid] < target && target <= nums[right]) {
                    left = mid + 1; 
                } else {
                    right = mid - 1; 
                }
            }
        }

        return -1; 
    }

    public static void main(String[] args) {
        int[] nums1 = {4, 5, 6, 7, 0, 1, 2};
        System.out.println(search(nums1, 0));  
    }
}
