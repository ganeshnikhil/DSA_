// DAY 11 <-----/---> QUE 2

import java.util.Scanner;

public class Ques2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the string: ");
        String input = sc.nextLine();
        input = input.toLowerCase();
        StringBuilder filtered = new StringBuilder();
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (ch >= 'a' && ch <= 'z') {
                filtered.append(ch);
            }
        }
        String clean = filtered.toString();
        int size = clean.length();
        String longestPalindrome = "";
        for (int i = 0; i < size; i++) {
            for (int j = i; j < size; j++) {
                String substr = clean.substring(i, j + 1);
                if (isPalindrome(substr) && substr.length() >= longestPalindrome.length()) {
                    longestPalindrome = substr;
                }
            }
        }
        System.out.println("The longest palindrome string: " + longestPalindrome);
        sc.close();
    }
    public static boolean isPalindrome(String s) {
        int left = 0, right = s.length() - 1;
        while (left < right) {
            if (s.charAt(left) != s.charAt(right)) {
                return false;
            }
            left++;
            right--;
        }
        return true;
    }
}
