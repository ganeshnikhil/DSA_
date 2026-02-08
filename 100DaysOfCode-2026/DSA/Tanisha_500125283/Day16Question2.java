// Problem Statement: Given an array of integers and a target number, write a program that counts how many 
// times the target number appears in the array. This is useful for data analysis where you need 
// to find the frequency of specific values. Your program should traverse through the entire 
// array and maintain a counter that increments each time the target value is encountered. 
// Task: Count the frequency of a target value in an array. 
// Examples Input: Array: [1, 2, 3, 2, 2, 4], Target: 2 
// Output: 3 

package DSA.Tanisha_500125283;

public class Day16Question2 {
    public static int countFrequency(int[] arr, int target) {
        int count = 0;
        for (int num : arr) {
            if (num == target) {
                count++;
            }
        }
        return count;
    }

    public static void main(String[] args) {
        int[] arr = { 1, 2, 3, 2, 2, 4 };
        int target = 2;
        int result = countFrequency(arr, target);
        System.out.println(result);
    }
}
