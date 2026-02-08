// Problem Statement: Given a string and a specific character, write a program that counts how many times that 
// character appears in the string. The search should be case sensitive, meaning 'A' and 'a' are 
// considered different characters. 
// Task: Count the occurrences of a specific character in a string (case sensitive). 
// Examples Input: String: "programming", Character: 'r' 
// Output: 2

package DSA.Tanisha_500125283;
import java.util.Scanner;

public class Day8Question2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String str = sc.nextLine();
        System.out.print("Enter the character to count: ");
        char target = sc.next().charAt(0); 
        // charAt(0) returns the character located at the specified position (index) in the string.



        int count = 0;

        for (int i = 0; i < str.length(); i++) {
            if (str.charAt(i) == target) {
                count++;
            }
        }

        System.out.println(count );

        sc.close();
    }
}
