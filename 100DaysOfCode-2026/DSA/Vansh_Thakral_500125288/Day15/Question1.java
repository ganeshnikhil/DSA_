import java.util.Arrays;

public class Question1 {
    public static void main(String[] args) {
        int[] nums = {64, 34, 25, 12, 22, 11, 90};

        Arrays.sort(nums);  // Built-in sort (ascending)

        System.out.println("Sorted Array:");
        System.out.println(Arrays.toString(nums));
    }
}
