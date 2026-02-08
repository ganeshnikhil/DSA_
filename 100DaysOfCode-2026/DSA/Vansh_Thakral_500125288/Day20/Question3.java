import java.util.*;

public class Question3 {
    public static void main(String[] args) {
        int[] nums = {1, 23, 12, 9, 30, 2, 50};
        int k = 4;
        System.out.println(findKthLargest(nums, k)); 
    }

    public static int findKthLargest(int[] nums, int k) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();

        for (int num : nums) {
            minHeap.add(num);
            if (minHeap.size() > k)
                minHeap.poll(); 
        return minHeap.peek();
    }
}
