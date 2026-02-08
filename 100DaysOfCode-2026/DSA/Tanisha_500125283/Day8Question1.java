// Problem Statement:Write a program that takes a string as input and returns its length (number of characters). 
// Additionally, convert the string to uppercase and lowercase, and display both versions along 
// with the original string. 
// Task: Calculate string length and convert to uppercase and lowercase formats. 
// Examples Input: "Hello World" 
// Output: Length: 11, Original: "Hello World", Uppercase: "HELLO WORLD", Lowercase: "hello world"

package DSA.Tanisha_500125283;
import java.util.*;
public class Day8Question1{
    public static void main(String[] args){
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string:");
        String str= sc.nextLine();
        int length=str.length();

        String upper = str.toUpperCase();
        String lower = str.toLowerCase();

        System.out.println("Length: " + length + 
        ", Original: \"" + str + "\"" +", Uppercase: \"" + upper + "\"" +", Lowercase: \"" + lower + "\"");

        sc.close();
    }
}