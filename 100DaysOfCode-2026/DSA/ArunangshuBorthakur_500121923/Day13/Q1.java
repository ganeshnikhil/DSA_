
import java.util.Scanner;

public class Q1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        int count = 0;
        String longWord = "";
        StringBuilder currentWord = new StringBuilder();

        int n = input.length();
        for (int i = 0; i < n; i++) {
            char ch = input.charAt(i);

            if (ch != ' ') {
                currentWord.append(ch);
            }

            // If we hit a space or end of string and we were building a word
            if ((ch == ' ' || i == n - 1) && currentWord.length() > 0) {
                count++;
                if (currentWord.length() > longWord.length()) {
                    longWord = currentWord.toString();
                }
                currentWord.setLength(0); // reset for next word
            }
        }

        System.out.println("Word Count: " + count);
        System.out.println("Longest Word: " + (count > 0 ? longWord : "None"));
    }
}