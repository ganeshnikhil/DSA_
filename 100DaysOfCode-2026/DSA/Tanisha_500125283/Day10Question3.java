// Problem Staement: Two strings are anagrams if they contain the same characters with the same frequency, but 
// possibly in different order. Write a program to check if two given strings are anagrams of 
// each other. Ignore case and spaces for this comparison. 
// Task: Check if two strings are anagrams (ignore case and spaces). 
// Examples Input: String1: "listen", String2: "silent" 
// Output: true

package DSA.Tanisha_500125283;

import java.util.*;
public class Day10Question3 {

    public static boolean Anagrams(String str1, String str2) {
        str1 = str1.replaceAll("\\s+", "").toLowerCase();
        str2 = str2.replaceAll("\\s+", "").toLowerCase();

        if (str1.length() != str2.length()) {
            return false;
        }

        // Converting  to char arrays and sorting
        char[] arr1 = str1.toCharArray();
        char[] arr2 = str2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        return Arrays.equals(arr1, arr2);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("String1:");
        String str1 = sc.nextLine();

        System.out.println("String2:");
        String str2 = sc.nextLine();

        boolean result = Anagrams(str1, str2);
        System.out.println(result);  

        sc.close();
    }
}
