
class Q3 {

    public static void main(String[] args) {

        int[] arr = {64, 34, 25, 12, 22, 11, 90};
        int n = arr.length;
        boolean swap;

        for (int i = 0; i < n - 1; i++) {
            swap = false;
            for (int j = 0; j < n - i - 1; j++) {
                if (arr[j] > arr[j + 1]) {
                    int temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                    swap = true;
                }
            }
            if (!swap) {
                break;
            }

        }
        for (int num : arr) {

            System.out.print(num + " ");
        }

    }
}
