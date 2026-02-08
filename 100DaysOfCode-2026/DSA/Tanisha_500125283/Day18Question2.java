// Problem Statement: Write a program that implements insertion sort to arrange an array of integers in ascending 
// order. Insertion sort builds the final sorted array one element at a time by taking elements 
// from the unsorted portion and inserting them into their correct position in the sorted portion. 
// It's similar to how you might sort playing cards in your hand, making it intuitive to 
// understand and efficient for small arrays or nearly sorted data. 
// Task: Implement insertion sort using the card-sorting approach. 
// Examples Input: [12, 11, 13, 5, 6] 
// Output: [5, 6, 11, 12, 13]

package DSA.Tanisha_500125283;

public class Day18Question2 {

    public static void insertionSort(int[] array) {
        int n = array.length;

        for (int i = 1; i < n; i++) {
            int key = array[i];    
            int j = i - 1;

            while (j >= 0 && array[j] > key) {
                array[j + 1] = array[j];  
                j--;
            }

            array[j + 1] = key;  
        }
    }

    public static void main(String[] args) {
        int[] array = {12, 11, 13, 5, 6};

        insertionSort(array);
        System.out.print("Output: [");
        for (int i = 0; i < array.length; i++) {
            System.out.print(array[i]);
            if (i != array.length - 1) System.out.print(", ");
        }
        System.out.println("]");
    }
}
