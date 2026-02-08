// Problem Staement: Write a program that compares two strings and determines their relationship. Check if the 
// strings are exactly equal, equal when ignoring case, or completely different. Also 
// determine which string comes first alphabetically (lexicographically). 
// Task: Compare two strings for exact equality, case-insensitive equality, and 
// lexicographical order. 
// Examples Input: String1: "Hello", String2: "hello"
// Output:  Not equal, Equal ignoring case, "Hello" comes before "hello"

package DSA.Tanisha_500125283;

import java.util.Scanner;

public class Day10Question1 {

    public static void comparing(String str1, String str2) {
        StringBuilder result = new StringBuilder();

        if (str1.equals(str2)) {
            result.append("Exactly equal, ");
        } else {
            result.append("Not equal, ");

           
            if (str1.equalsIgnoreCase(str2)) {
                result.append("Equal when ignoring case, ");
            } else {
                result.append("Completely different, ");
            }
        }

        
        int compare = str1.compareTo(str2);
        if (compare < 0) {
            result.append("\"").append(str1).append("\" comes before \"").append(str2).append("\"");
        } else if (compare > 0) {
            result.append("\"").append(str2).append("\" comes before \"").append(str1).append("\"");
        } else {
            result.append("Both strings are equal");
        }

     
        System.out.println(result);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        String str1 = sc.nextLine().trim();  // trim removes leading and trailing spaces from the string
        String str2 = sc.nextLine().trim();  

        comparing(str1, str2);

        sc.close();
    }
}
