import java.util.Arrays;

public class Question1 {
    public static int[] replaceNegatives(int[] nums) {
        for (int i = 0; i < nums.length; i++) {
            if (nums[i] < 0) {
                nums[i] = 0;
            }
        }
        return nums;
    }

    public static void main(String[] args) {
        int[] nums = {-1, 2, -3, 4, 5};
        System.out.println("Modified Array: " + Arrays.toString(replaceNegatives(nums)));
    }
}
