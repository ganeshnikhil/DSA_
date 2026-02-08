import java.util.*;

public class Question3 {

    // insertion Sort method
    static void Sortcolor(int[] arr, int n) {
    int start = 0;
    int mid = 0;
    int end = n - 1;

    while (mid <= end) {
        switch (arr[mid]) {
            case 0:
                swap(arr, start, mid);
                start++;
                mid++;
                break;

            case 1:
                mid++;
                break;

            case 2:
                swap(arr, mid, end);
                end--;
                break;
        }
    }
}

   static private void swap(int nums[], int pos1, int pos2){
        int temp=nums[pos1];
        nums[pos1]= nums[pos2];
        nums[pos2]=temp;
    }

    // Method to print array
    static void printArray(int[] arr, int n) {
        for (int i = 0; i < n; i++) {
            System.out.print(arr[i] + " ");
        }
        System.out.println();
    }

    // Main method
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter array length: ");
        int n = sc.nextInt();

        int[] arr = new int[n];
        System.out.println("Enter array elements: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }

        Sortcolor(arr, n); // Sorting the array
        System.out.println("Sorted array: ");
        printArray(arr, n);     // Printing the sorted array
    }
}
