import java.util.*;

public class Question2 {
    public static void findMissingAndRepeated(int[] nums) {
        int n = nums.length;
        int[] count = new int[n + 1];

        for (int num : nums) {
            count[num]++;
        }

        int missing = -1, repeated = -1;
        for (int i = 1; i <= n; i++) {
            if (count[i] == 0) missing = i;
            if (count[i] == 2) repeated = i;
        }

        System.out.println("Missing: " + missing + ", Twice: " + repeated);
    }

    public static void main(String[] args) {
        int[] nums = {4, 3, 6, 2, 1, 1};
        findMissingAndRepeated(nums);
    }
}
