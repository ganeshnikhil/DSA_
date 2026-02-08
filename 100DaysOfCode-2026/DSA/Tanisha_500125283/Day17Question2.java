// Problem Statement: In a sorted array that may contain duplicate elements, find the index of the first occurrence 
// of a target element. Unlike regular binary search that can return any occurrence, this version 
// specifically needs to find the leftmost position where the target appears. This is useful when 
// you need to find the starting position of a sequence of identical elements in sorted data.
// Task: Find the first occurrence of a target element in sorted array with duplicates. 
// Examples Input: Array: [1, 2, 2, 2, 3, 4], Target: 2 
// Output: 1

package DSA.Tanisha_500125283;
public class Day17Question2  {

    public static int Occurrence(int[] array, int target) {
        int left = 0, right = array.length - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (array[mid] == target) {
                result = mid;         
                right = mid - 1;
            } else if (array[mid] < target) {
                left = mid + 1;       
            } else {
                right = mid - 1;      
            }
        }

        return result;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 2, 2, 3, 4};
        int target = 2;

        int index = Occurrence(array, target);
        System.out.println("Output: " + index);
    }
}
