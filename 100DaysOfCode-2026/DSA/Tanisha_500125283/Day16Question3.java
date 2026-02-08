// Problem Statement: Create a function that finds and returns the largest element in an unsorted array of integers. 
// Your algorithm should examine each element in the array and keep track of the maximum 
// value seen so far. This is a fundamental operation in data processing and forms the basis for 
// many other algorithms. The function should work efficiently even with negative numbers in 
// the array. 
// Task: Find the maximum element in an array using single-pass traversal. 
// Examples Input: [3, 7, 1, 9, 4, 6] 
// Output: 9

package DSA.Tanisha_500125283;
public class Day16Question3 {
    public static int Maximum(int[] arr) {
        if (arr == null || arr.length == 0) {
            return -1; 
        }

        int max = arr[0];

        for (int i = 1; i < arr.length; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }

    public static void main(String[] args) {
        int[] array = {3, 7, 1, 9, 4, 6};
        System.out.println(Maximum(array));    
    }
}
