import java.util.*;

public class SecondLargestElement {
    public static void main(String[] args) {
        int[] nums = {10, 20, 30, 40};
        System.out.println(findSecondLargest(nums)); 
    }

    public static int findSecondLargest(int[] nums) {
        Set<Integer> unique = new HashSet<>();
        for (int num : nums) {
            unique.add(num);
        }

        if (unique.size() < 2) return -1;

        List<Integer> sorted = new ArrayList<>(unique);
        Collections.sort(sorted, Collections.reverseOrder());

        return sorted.get(1); // Second largest
    }
}
