import java.util.*;

public class Question2 {

    // insertion Sort method
    static void insertionSort(int[] arr, int n) {
        for (int i = 0; i < n ; i++) {
            int key = arr[i];
            int j=i-1;
            while(j>=0&&arr[j]>key){
                arr[j+1]=arr[j];
                j=j-1;
            }
            arr[j+1]=key;

        }
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

        insertionSort(arr, n);  // Sorting the array
        System.out.println("Sorted array: ");
        printArray(arr, n);     // Printing the sorted array
    }
}
