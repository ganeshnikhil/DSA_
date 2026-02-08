import java.util.Scanner;

public class Question2 {

    // Helper method to swap elements if needed
    static void swapIfGreater(long[] arr1, long[] arr2, int ind1, int ind2) {
        if (arr1[ind1] > arr2[ind2]) {
            long temp = arr1[ind1];
            arr1[ind1] = arr2[ind2];
            arr2[ind2] = temp;
        }
    }

    // Method to merge two sorted arrays in-place using the Gap method
    public static void merge(long[] arr1, long[] arr2, int n, int m) {
        int len = n + m;
        int gap = (len / 2) + (len % 2);  // Initial gap

        while (gap > 0) {
            int left = 0;
            int right = left + gap;

            while (right < len) {
                // Case 1: both pointers in arr1
                if (left < n && right < n) {
                    if (arr1[left] > arr1[right]) {
                        long temp = arr1[left];
                        arr1[left] = arr1[right];
                        arr1[right] = temp;
                    }
                }
                // Case 2: left in arr1, right in arr2
                else if (left < n && right >= n) {
                    swapIfGreater(arr1, arr2, left, right - n);
                }
                // Case 3: both in arr2
                else {
                    if (arr2[left - n] > arr2[right - n]) {
                        long temp = arr2[left - n];
                        arr2[left - n] = arr2[right - n];
                        arr2[right - n] = temp;
                    }
                }
                left++;
                right++;
            }

            if (gap == 1) break;
            gap = (gap / 2) + (gap % 2);  // Reduce the gap
        }
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        // Input for array 1
        System.out.print("Enter length of array1: ");
        int n = sc.nextInt();
        long[] arr1 = new long[n];
        System.out.println("Enter " + n + " sorted elements of array1:");
        for (int i = 0; i < n; i++) {
            arr1[i] = sc.nextLong();
        }

        // Input for array 2
        System.out.print("Enter length of array2: ");
        int m = sc.nextInt();
        long[] arr2 = new long[m];
        System.out.println("Enter " + m + " sorted elements of array2:");
        for (int i = 0; i < m; i++) {
            arr2[i] = sc.nextLong();
        }

        // Call merge
        merge(arr1, arr2, n, m);

        // Print merged arrays
        System.out.println("\nMerged array:");
        for (long num : arr1) {
            System.out.print(num + " ");
        
        }
        for (long num : arr2) {
            System.out.print(num + " ");
        }
    

        sc.close();
    }
}
