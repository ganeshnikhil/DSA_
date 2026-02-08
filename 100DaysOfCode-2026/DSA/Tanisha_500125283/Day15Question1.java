// Problem Satement:A problem that introduces fundamental sorting concepts and demonstrates how to reorganize 
// data efficiently. 
// You are given an array of integers that are in random order. Your task is to write a program 
// that sorts this array in ascending order from smallest to largest. You can use any built-in 
// sorting function available in your programming language to accomplish this task. 
// Task: Sort an integer array in ascending order using built-in sorting functions. 
// Examples Input: [64, 34, 25, 12, 22, 11, 90] 
// Output: [11, 12, 22, 25, 34, 64, 90]

package DSA.Tanisha_500125283;
import java.util.Arrays;
public class Day15Question1{
    public static void main(String[] args){
        int[] arr={64, 34, 25, 12, 22, 11, 90};
        Arrays.sort(arr);
        System.out.println("Sorted Array:"+Arrays.toString(arr));
    }
}