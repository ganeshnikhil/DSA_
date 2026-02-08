import java.util.*;
  
public class Day_11_Question_2 { 
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String s = sc.nextLine();

        String longest = "";

        for (int start = 0; start < s.length(); start++) {
            for (int end = start; end < s.length(); end++) {
                String sub = "";
                for (int k = start; k <= end; k++) {
                    sub += s.charAt(k);
                }

                if (isPalindrome(sub)) {
                    if (sub.length() > longest.length()) {
                        longest = sub;
                    }
                }
            }
        }

        System.out.println("Longest Palindromic Substring: " + longest);
    }

    public static boolean isPalindrome(String str) {
        for (int i = 0; i < str.length() / 2; i++) {
            if (str.charAt(i) != str.charAt(str.length() - 1 - i)) {
                return false;
            }
        }
        return true;
    }
}
