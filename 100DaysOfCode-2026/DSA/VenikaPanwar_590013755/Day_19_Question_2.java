import java.util.*;

public class Day_19_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter size of array:");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter array elements:");
        for (int i = 0; i < n; i++) arr[i] = sc.nextInt();

        int peakIndex = findPeak(arr, n);
        System.out.println("Peak element index: " + peakIndex);
    }

    public static int findPeak(int[] arr, int n) {
        int low = 0, high = n - 1;

        while (low <= high) {
            int mid = (low + high) / 2;

            boolean left = (mid == 0 || arr[mid] >= arr[mid - 1]);
            boolean right = (mid == n - 1 || arr[mid] >= arr[mid + 1]);

            if (left && right) return mid;
            else if (mid > 0 && arr[mid - 1] > arr[mid])
                high = mid - 1;
            else
                low = mid + 1;
        }

        return -1;
    }
}
