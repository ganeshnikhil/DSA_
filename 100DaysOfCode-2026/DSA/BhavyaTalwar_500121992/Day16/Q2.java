
class Q2 {

    public static void main(String[] args) {

        int[] arr = {1, 2, 3, 2, 2, 4};
        int num = 2;
        int n = arr.length;
        System.out.println(occur(arr, n, num));
    }

    public static int occur(int[] arr, int n, int num) {
        int count = 0;
        for (int i = 0; i < n - 1; i++) {
            if (arr[i] == num) {
                count++;
            }
        }
        return count;
    }
}
