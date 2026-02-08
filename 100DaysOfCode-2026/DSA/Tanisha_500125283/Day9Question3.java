// Problem Statement: A problem that combines character frequency analysis with string traversal techniques. 
// Given a string, find the first character that appears only once in the string. If all characters 
// repeat or the string is empty, return a special indicator like -1 or None. 
// Task: Find the first character that appears only once, or return -1 if none exists. 
// Examples Input: "programming" 
// Output: 'p'

package DSA.Tanisha_500125283;
import java.util.Scanner;

public class Day9Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        
        int[] freq = new int[256]; // For all ASCII characters

        for (int i = 0; i < str.length(); i++) {
            freq[str.charAt(i)]++;
        }
        for (int i = 0; i < str.length(); i++) {
            if (freq[str.charAt(i)] == 1) {
                System.out.println( str.charAt(i));
                sc.close();
                return;
            }
        }

        System.out.println("-1"); 
        sc.close();
    }
}
