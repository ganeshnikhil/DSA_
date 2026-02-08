import java.util.*;

public class Day_8_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String input = sc.nextLine();

        // Calculate length manually
        int length = 0;
        for (char c : input.toCharArray()) {
            length++;
        }

        // Convert to uppercase manually
        String upper = "";
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (ch >= 'a' && ch <= 'z') {
                upper += (char)(ch - 32);
            } else {
                upper += ch;
            }
        }

        // Convert to lowercase manually
        String lower = "";
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (ch >= 'A' && ch <= 'Z') {
                lower += (char)(ch + 32);
            } else {
                lower += ch;
            }
        }

        // Output
        System.out.println("Length: " + length);
        System.out.println("Original: " + input);
        System.out.println("Uppercase: " + upper);
        System.out.println("Lowercase: " + lower);
    }
}
