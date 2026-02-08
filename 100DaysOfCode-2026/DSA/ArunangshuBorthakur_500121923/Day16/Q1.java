
class Q1 {

    public static void main(String[] args) {

        int[] arr = {10, 20, 30, 40, 50};
        int num = 30;
        int n = arr.length;
        System.out.println(linear(arr, n, num));
    }

    public static int linear(int[] arr, int n, int num) {
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == num) {
                return i;
            }
        }
        return -1;
    }
}