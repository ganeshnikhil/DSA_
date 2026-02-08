// Problem Statement: Given two arrays that are already sorted in ascending order, write a function to merge them 
// into a single sorted array. The merged array should contain all elements from both input 
// arrays while maintaining the sorted order. This operation is fundamental in merge sort 
// algorithm and is commonly used in data processing where you need to combine sorted 
// datasets efficiently without re-sorting the entire collection. 
// Task: Merge two pre-sorted arrays into one sorted array using optimal merging 
// technique. 
// Examples Input: Array1: [1, 3, 5], Array2: [2, 4, 6] 
// Output: [1, 2, 3, 4, 5, 6]



package DSA.Tanisha_500125283;
import java.util.*;

public class Day20Question2{

    public static void main(String[] args) {
        int[] array1 = {1, 3, 5};
        int[] array2 = {2, 4, 6};

        int[] merged = mergeArrays(array1, array2);
        System.out.println(Arrays.toString(merged)); 
    }

    public static int[] mergeArrays(int[] arr1, int[] arr2) {
        int n = arr1.length;
        int m = arr2.length;
        int[] result = new int[n + m];

        int i = 0, j = 0, k = 0;
        while (i < n && j < m) {
            if (arr1[i] <= arr2[j]) {
                result[k++] = arr1[i++];
            } else {
                result[k++] = arr2[j++];
            }
        }
        while (i < n) {
            result[k++] = arr1[i++];
        }

        while (j < m) {
            result[k++] = arr2[j++];
        }

        return result;
    }
}
