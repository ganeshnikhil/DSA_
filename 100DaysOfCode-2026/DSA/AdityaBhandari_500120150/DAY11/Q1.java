import java.util.*;
public class Q1{
     static boolean sentencePalindrome(String s) {
        StringBuilder s1 = new StringBuilder();
        for (char ch : s.toCharArray()) {
            if (Character.isLetterOrDigit(ch)) {
                s1.append(Character.toLowerCase(ch));
            }
        }
        StringBuilder rev = new StringBuilder(s1.toString());
        rev.reverse();
        return s1.toString().equals(rev.toString());
    }

    public static void main(String[] args) {
        String s = "a man, a plan, a canal: Panama";
  
        System.out.println(sentencePalindrome(s)
                           			? "True" : "False");

        String s1 = "race a car";
  
        System.out.println(sentencePalindrome(s1)
                           			? "True" : "False");
    }
}