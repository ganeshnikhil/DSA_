
class Q2 {

    public static void main(String[] args) {
        int[] arr = {5, 7, 7, 8, 8, 8, 10};
        int num = 8;

        System.out.println(first(arr, num));
    }

    public static int first(int[] arr, int num) {
        int left = 0;
        int right = arr.length - 1;
        int result = -1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == num) {
                result = mid;
                right = mid - 1;
            } else if (arr[mid] < num) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        }

        return result;
    }

}
