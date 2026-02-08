
class Day_19_Question1{

    public static void main(String[] args) {
        int[] arr = {11, 13, 15, 17, 19, 2, 3, 6, 7};
        int num = 6;
        System.out.println(search(arr, num));
    }

    public static int search(int[] arr, int num) {
        int low = 0, high = arr.length - 1;

        while (low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == num) {
                return mid;
            }

            if (arr[low] <= arr[mid]) {
                if (arr[low] <= num && num < arr[mid]) {
                    high = mid - 1;
                } else {
                    low = mid + 1;
                }
            } else {
                if (arr[mid] < num && num <= arr[high]) {
                    low = mid + 1;
                } else {
                    high = mid - 1;
                }
            }
        }

        return -1;
    }
}
