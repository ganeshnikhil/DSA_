import java.util.*; 

public class Day_11_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = sc.nextLine();

        // Step 1: Filter only letters and digits, convert to lowercase
        String cleaned = "";
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);

            if ((ch >= 'A' && ch <= 'Z')) {
                cleaned += (char)(ch + 32); // convert to lowercase
            } else if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
                cleaned += ch;
            }
        }

        // Step 2: Check palindrome
        boolean isPalindrome = true;
        for (int i = 0; i < cleaned.length() / 2; i++) {
            if (cleaned.charAt(i) != cleaned.charAt(cleaned.length() - 1 - i)) {
                isPalindrome = false;
                break;
            }
        }

        System.out.println(isPalindrome);
    }
}
