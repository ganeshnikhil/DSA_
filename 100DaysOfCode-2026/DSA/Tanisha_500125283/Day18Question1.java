// Problem Statement: Implement the selection sort algorithm to sort an array of integers in ascending order. 
// Selection sort works by finding the minimum element from the unsorted portion of the array 
// and swapping it with the first element of the unsorted portion. This process is repeated until 
// the entire array is sorted. While not the most efficient for large datasets, selection sort is 
// simple to understand and implement, making it great for learning sorting concepts and 
// algorithm fundamentals. 
// Task: Implement selection sort to arrange elements in ascending order. 
// Examples Input: [29, 10, 14, 37, 13] 
// Output: [10, 13, 14, 29, 37]



package DSA.Tanisha_500125283;

public class Day18Question1 {
    public static void selectionSort(int[] arr) {
        int n = arr.length;
        for (int i = 0; i < n - 1; i++) {
            int minimumIndex = i;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] < arr[minimumIndex]) {
                    minimumIndex = j;
                }
            }

            int temp = arr[minimumIndex];
            arr[minimumIndex] = arr[i];
            arr[i] = temp;
        }
    }

    public static void main(String[] args) {
        int[] arr = { 29, 10, 14, 37, 13 };

        selectionSort(arr);

        System.out.print("Output: [");
        for (int i = 0; i < arr.length; i++) {
            System.out.print(arr[i]);
            if (i != arr.length - 1) System.out.print(", ");
        }
        System.out.println("]");

    }
}
