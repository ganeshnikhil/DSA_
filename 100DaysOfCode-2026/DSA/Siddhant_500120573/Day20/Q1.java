import java.util.*;

public class Q1{
    public static void mergeArrays(int[] arr1, int[] arr2, int[] arr3) {
        int n1 = arr1.length;
        int n2 = arr2.length;
        int i = 0, j = 0, k = 0;
        while (i < n1) {
            arr3[k++] = arr1[i++];
        }
        while (j < n2) {
            arr3[k++] = arr2[j++];
        }
        Arrays.sort(arr3);
    }
    public static void main(String[] args) {
        int[] arr1 = {1, 3, 5};
        int[] arr2 = {2, 4, 6};
        int[] arr3 = new int[arr1.length + arr2.length];
        mergeArrays(arr1, arr2, arr3);
        for (int value : arr3)
            System.out.print(value + " ");
    }
}