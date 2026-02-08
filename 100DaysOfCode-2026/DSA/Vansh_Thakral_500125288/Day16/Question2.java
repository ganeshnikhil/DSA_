public class Question2 {
    public static int countOccurrences(int[] arr, int target) {
        int count = 0;
        for (int num : arr) {
            if (num == target) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] array = {1, 2, 3, 2, 2, 4};
        int target = 2;
        System.out.println(countOccurrences(array, target)); // Output: 3
    }
}
