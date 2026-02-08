import java.util.*;

class Question1 {

    int BinarySearch(int arr[], int n, int target) {
        int low = 0;
        int high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            if (arr[mid] == target) {
                return mid;
            } else if (arr[mid] < target) {  // Fix: use arr[mid] instead of mid
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }

        return -1;  // Element not found
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array length: ");
        int n = sc.nextInt();

        int arr[] = new int[n];
        System.out.println("Enter sorted array elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter target element: ");
        int target = sc.nextInt();

        Question1 obj = new Question1();
        int result = obj.BinarySearch(arr, n, target);

        System.out.println(result);
    }
}
