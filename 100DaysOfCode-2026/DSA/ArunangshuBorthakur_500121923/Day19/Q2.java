
class Q2 {

    public static void main(String[] args) {
        int[] arr = {10, 20, 15, 2, 23, 90, 67};
        System.out.println(peak(arr));
    }

    public static int peak(int[] arr) {
        int low = 0;
        int high = arr.length - 1;

        while (low < high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] > arr[mid + 1]) {
                high = mid;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }

}