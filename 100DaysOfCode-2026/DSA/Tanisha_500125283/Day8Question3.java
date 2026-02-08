// Problem Statement: Write a function that takes a string as input and returns the string with all characters in 
// reverse order. For example, if the input is "hello", the output should be "olleh". 
// Task: Return the string with all characters in reverse order. 
// Examples Input: "hello" 
// Output: "olleh"

package DSA.Tanisha_500125283;

import java.util.Scanner;

public class Day8Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter a string: ");
        String str = sc.nextLine();
        // in string builder(built in function) we can modify it, reverse is used for reversing 
        // and afterwards we can covert it back tpo string using .toString
        String reversed = new StringBuilder(str).reverse().toString();

        System.out.println(reversed);

        sc.close();
    }
}
 
    

