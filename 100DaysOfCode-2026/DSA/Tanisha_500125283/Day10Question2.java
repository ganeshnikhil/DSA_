// [Problem Statement: Create a function that removes all spaces from a given string and returns the result. 
// Additionally, provide a version that removes only leading and trailing spaces (trim), and 
// another that removes extra spaces between words (leaving only single spaces). 
// Task: Implement three space removal operations: all spaces, trim, and single spaces. 
// Examples Input: " hello world " 
// Output: Remove all: "helloworld", Trim: "hello world", Single spaces: "hello world"

package DSA.Tanisha_500125283;
import java.util.Scanner;

public class Day10Question2{ 
    // Removing all spaces
    public static String removeAllSpaces(String str) {
        return str.replace(" ", "");
    }

    //Triming leading and trailing spaces
    public static String trimSpaces(String str) {
        return str.trim();
    }

    
    public static String singleSpaceOnly(String str) {
        return str.trim().replaceAll("\\s+", " ");
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        System.out.println("Remove all: \"" + removeAllSpaces(input) + "\"");
        System.out.println("Trim: \"" + trimSpaces(input) + "\"");
        System.out.println("Single spaces: \"" + singleSpaceOnly(input) + "\"");

        sc.close();
    }
}
