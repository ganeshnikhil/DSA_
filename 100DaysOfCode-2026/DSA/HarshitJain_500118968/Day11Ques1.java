import java.util.Scanner;

public class PalindromeIgnoreSpacesPunct {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        // Normalize: keep only alphanumeric, ignore case
        StringBuilder sb = new StringBuilder();
        for (char c : input.toCharArray()) {
            if (Character.isLetterOrDigit(c)) {
                sb.append(Character.toLowerCase(c));
            }
        }
        String filtered = sb.toString();

        // Check palindrome
        int left = 0, right = filtered.length() - 1;
        boolean isPalindrome = true;
        while (left < right) {
            if (filtered.charAt(left) != filtered.charAt(right)) {
                isPalindrome = false;
                break;
            }
            left++;
            right--;
        }
        System.out.println(isPalindrome);
    }
}