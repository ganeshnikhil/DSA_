import java.util.*;

public class Day_9_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = sc.nextLine();

        // Filter only alphabet and convert to lowercase manually
        String cleaned = "";
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if ((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
                if (ch >= 'A' && ch <= 'Z') {
                    ch = (char)(ch + 32);  // convert to lowercase
                }
                cleaned += ch;
            }
        }

        // Check palindrome
        boolean isPalindrome = true;
        for (int i = 0; i < cleaned.length() / 2; i++) {
            if (cleaned.charAt(i) != cleaned.charAt(cleaned.length() - 1 - i)) {
                isPalindrome = false;
                break;
            }
        }

        System.out.println("Is Palindrome? " + isPalindrome);
    }
}
