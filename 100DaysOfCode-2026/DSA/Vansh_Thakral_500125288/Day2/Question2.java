public class FirstAndLastElement {
    public static void main(String[] args) {
        int[] nums = {1, 2, 3, 4};
        printFirstAndLast(nums);
    }

    public static void printFirstAndLast(int[] nums) {
        if (nums.length == 0) {
            System.out.println("Array is empty.");
            return;
        }
        System.out.println("First: " + nums[0] + ", Last: " + nums[nums.length - 1]);
    }
}
