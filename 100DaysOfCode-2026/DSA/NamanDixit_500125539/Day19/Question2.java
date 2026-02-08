import java.util.Scanner;

public class Question2 {

    public int peakIndexInMountainArray(int[] A) {
        int st = 1, end = A.length - 2;

        while (st <= end) {
            int mid = st + (end - st) / 2;

            if (A[mid - 1] < A[mid] && A[mid] > A[mid + 1]) {
                return mid;
            } else if (A[mid - 1] < A[mid] && A[mid] < A[mid + 1]) {
                // we are on the increasing slope
                st = mid + 1;
            } else {
                // we are on the decreasing slope
                end = mid - 1;
            }
        }

        return -1; // should not happen in a valid mountain array
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter array length: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter mountain array elements:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Question2 obj = new Question2();
        int result = obj.peakIndexInMountainArray(arr);

        System.out.println("Peak index is: " + result);

        sc.close();
    }
}
