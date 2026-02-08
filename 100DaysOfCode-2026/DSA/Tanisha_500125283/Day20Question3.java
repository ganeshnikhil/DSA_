// Problem Statement: Find the Kth largest element in an unsorted array of integers. For example, if K=1, find the 
// largest element; if K=2, find the second largest element, and so on. This problem appears 
// frequently in interviews and real-world applications like finding top performers, identifying 
// outliers, or selecting elements based on rank. You can solve this by sorting first, but try to 
// think of more efficient approaches using selection algorithms or heap-based methods. 
// Task: Find the Kth largest element using efficient selection algorithms beyond simple 
// sorting. 
// Examples Input: Array: [3, 2, 1, 5, 6, 4], K: 2 
// Output: 5


package DSA.Tanisha_500125283;
import java.util.*;

public class Day20Question3  {
    public static int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int num : nums) {
            minHeap.offer(num);
            if (minHeap.size() > k) {
                minHeap.poll(); 
            }
        }

        return minHeap.peek(); 
    }

    public static void main(String[] args) {
        int[] nums = {3, 2, 1, 5, 6, 4};
        int k = 2;
        System.out.println(findKthLargest(nums, k)); 
    }
}
