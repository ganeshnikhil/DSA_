// Problem Statement: Write a program that takes a string as input and counts the number of vowels (a, e, i, o, u) and 
// consonants separately. Consider both uppercase and lowercase letters. Ignore any non
// alphabetic characters like numbers, spaces, or special symbols. 
// Task: Count vowels and consonants separately, ignoring non-alphabetic characters. 
// Examples Input: "hello" 
// Output: Vowels: 2, Consonants: 3

package DSA.Tanisha_500125283;
import java.util.Scanner;

public class Day9Question2 {
    public static void main(String[] args){
        Scanner sc= new Scanner(System.in);
        System.out.println("Enter the string:");
        String str=sc.nextLine();

        int vowels=0;
        int consonants=0;
        str=str.toLowerCase();
        for(int i=0; i<str.length();i++){
            char ch = str.charAt(i);

            if (Character.isLetter(ch)) {
                // Check if it's a vowel
                if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                    vowels++;
                } else {
                    consonants++;
                }
            }
        }

        System.out.println("Vowels: " + vowels);
        System.out.println("Consonants: " + consonants);

        sc.close();
        
    }
    
}
