//  Problem Statement: Write an advanced palindrome checker that ignores spaces, punctuation marks, and case sensitivity. This 
// means "A man, a plan, a canal: Panama" should be recognized as a palindrome. Your program should only 
// consider alphabetic and numeric characters for the palindrome check, making it more practical for real
// world text analysis.
// Task: Check if a string is a palindrome ignoring spaces, punctuation, and case.
// Examples Input:"A man, a plan, a canal: Panama"
// Output: true
 
package DSA.Tanisha_500125283;
public class Day11Question1 {
    public static Boolean palindrome(String s){
        StringBuilder str= new StringBuilder();
        for (char c : s.toCharArray()) { //s.toCharArray() converts the input string to a character array.
            if (Character.isLetterOrDigit(c)) {
                str.append(Character.toLowerCase(c));
            }
        }
        String filtered = str.toString();
        String reversed = str.reverse().toString();

        return filtered.equals(reversed);
    }

    public static void main(String[] args) {
        
        System.out.println(palindrome("A man, a plan, a canal: Panama"));
    }
}

