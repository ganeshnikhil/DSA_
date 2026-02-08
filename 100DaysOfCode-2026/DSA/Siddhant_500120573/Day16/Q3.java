public class Q3 {
    public static int findMax(int[] arr) {
        if (arr.length == 0) throw new IllegalArgumentException("Array is empty");
        int max = arr[0];
        for (int num : arr) {
            if (num > max) max = num;
        }
        return max;
    }

    public static void main(String[] args) {
        int[] arr = {3, 7, 1, 9, 4, 6};
        System.out.println(findMax(arr)); 
    }
}