
class Q1 {

    public static void main(String[] args) {
        int[] arr = {1, 3, 5, 7, 9, 11};
        int num = 7;

        System.out.println(binary(arr, num));
    }

    // Function to perform binary search
    public static int binary(int[] arr, int num) {
        int left = 0;
        int right = arr.length - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (arr[mid] == num) {
                return mid;
            }

            if (arr[mid] < num) {
                left = mid + 1;
            } // If target is smaller, ignore right half
            else {
                right = mid - 1;
            }
        }

        return -1;
    }

}
