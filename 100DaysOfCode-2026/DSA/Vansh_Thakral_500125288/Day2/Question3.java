import java.util.*;

public class CheckArrayEquality {
    public static void main(String[] args) {
        int[] nums1 = {1, 2, 3, 4};
        int[] nums2 = {4, 3, 2, 1};

        System.out.println(areArraysEqual(nums1, nums2)); 
    }

    public static boolean areArraysEqual(int[] a, int[] b) {
        if (a.length != b.length) return false;

        Map<Integer, Integer> freqMap1 = new HashMap<>();
        Map<Integer, Integer> freqMap2 = new HashMap<>();

        for (int num : a) freqMap1.put(num, freqMap1.getOrDefault(num, 0) + 1);
        for (int num : b) freqMap2.put(num, freqMap2.getOrDefault(num, 0) + 1);

        return freqMap1.equals(freqMap2);
    }
}
