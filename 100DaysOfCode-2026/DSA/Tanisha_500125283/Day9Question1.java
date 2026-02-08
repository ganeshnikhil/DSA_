// Problem Statement:A problem that teaches palindrome detection using string comparison and case-insensitive 
// analysis. Write a program that checks whether a given string is a palindrome or not. For this basic 
// version, consider only alphabetic characters and ignore case sensitivity. Return true if the 
// string is a palindrome, false otherwise. 
// Your task: Check if a string is a palindrome (case-insensitive, alphabetic characters only). 
// Examples Input: "racecar" 
// Output: true

package DSA.Tanisha_500125283;

import java.util.Scanner;

public class Day9Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        String cleaned = str.replaceAll("[^A-Za-z]", "").toLowerCase();//matches anything that ois not a  letter

        
        String reversed = new StringBuilder(cleaned).reverse().toString();
        boolean isPalindrome = cleaned.equals(reversed);
        // replace all and reverse are the built in functions
        System.out.println(isPalindrome);

        sc.close();
    }
}
