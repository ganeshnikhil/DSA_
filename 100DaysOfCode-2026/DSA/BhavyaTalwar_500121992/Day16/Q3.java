
class Q3 {

    public static void main(String[] args) {

        int[] arr = {-5, -2, -8, -1, -3};
        int n = arr.length;
        System.out.println(linear(arr, n));
    }

    public static int linear(int[] arr, int n) {
        int max = Integer.MIN_VALUE;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] > max) {
                max = arr[i];
            }
        }

        return max;
    }
}
