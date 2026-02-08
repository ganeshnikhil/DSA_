// Problem Satement: A problem that demonstrates custom sorting criteria beyond simple numerical or alphabetical 
// ordering. 
// You have an array of strings with different lengths, and you need to sort them based on their 
// character count rather than alphabetical order. Write a program that arranges the strings 
// from shortest to longest. If two strings have the same length, maintain their original 
// relative order. 
// Task: Sort strings by length while preserving relative order for equal-length strings. 
// Examples Input: ["apple", "pie", "washington", "cat"] 
// Output: ["pie", "cat", "apple", "washington"]

package DSA.Tanisha_500125283;
import java.util.Arrays;
import java.util.Comparator;

public class Day15Question2 {
    public static void main(String[] args) {
        String[] arr = {"apple", "pie", "washington", "cat"};
        Arrays.sort(arr, Comparator.comparingInt(String::length));
        System.out.println("Sorted by length: " + Arrays.toString(arr));
    }
}
