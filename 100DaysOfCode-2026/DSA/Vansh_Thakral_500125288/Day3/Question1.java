import java.util.*;

public class KFrequencySum {
    public static void main(String[] args) {
        int[] nums = {1, 8, 8, 8, 5, 6, 2};
        int k = 3;
        System.out.println(kFrequencySum(nums, k)); 
    }

    public static int kFrequencySum(int[] nums, int k) {
        Map<Integer, Integer> freqMap = new HashMap<>();
        for (int num : nums) {
            freqMap.put(num, freqMap.getOrDefault(num, 0) + 1);
        }

        int sum = 0;
        for (Map.Entry<Integer, Integer> entry : freqMap.entrySet()) {
            if (entry.getValue() == k) {
                sum += entry.getKey();
            }
        }
        return sum;
    }
}
