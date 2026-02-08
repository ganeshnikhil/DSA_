import java.util.Scanner;

public class Question3 {

    // QuickSelect Solution for kth largest
    public static int findKthLargest(int[] nums, int k) {
        int position = nums.length - k;
        int lo = 0, hi = nums.length - 1;

        while (lo < hi) {
            int pivotIndex = partition(nums, lo, hi);

            if (pivotIndex < position) {
                lo = pivotIndex + 1;
            } else if (pivotIndex > position) {
                hi = pivotIndex - 1;
            } else {
                break;
            }
        }

        return nums[position];
    }

    private static int partition(int[] arr, int left, int right) {
        int pivot = arr[left];
        int i = left, j = right;

        while (i < j) {
            while (i < right && arr[i] <= pivot) i++;
            while (j > left && arr[j] > pivot) j--;

            if (i < j) {
                swapNum(arr, i, j);
            }
        }

        swapNum(arr, left, j);
        return j;
    }

    private static void swapNum(int[] arr, int x, int y) {
        int temp = arr[x];
        arr[x] = arr[y];
        arr[y] = temp;
    }

    // Main method for user input
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter length of array: ");
        int n = sc.nextInt();
        int[] arr = new int[n];

        System.out.println("Enter " + n + " elements of the array:");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        System.out.print("Enter value of k: ");
        int k = sc.nextInt();

        int kthLargest = findKthLargest(arr, k);
        System.out.println("The " + k + "th largest element is: " + kthLargest);

        sc.close();
    }
}
