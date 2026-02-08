import java.util.*;  

public class Day_10_Question_2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter a string:");
        String input = sc.nextLine();

        // Remove All Spaces
        String noSpace = "";
        for (int i = 0; i < input.length(); i++) {
            if (input.charAt(i) != ' ') {
                noSpace += input.charAt(i);
            }
        }

        // Trim (remove leading & trailing)
        int start = 0, end = input.length() - 1;
        while (start < input.length() && input.charAt(start) == ' ') start++;
        while (end >= 0 && input.charAt(end) == ' ') end--;
        String trimmed = "";
        for (int i = start; i <= end; i++) {
            trimmed += input.charAt(i);
        }

        // Remove extra spaces between words (only single space left)
        String singleSpace = "";
        boolean lastWasSpace = false;
        for (int i = start; i <= end; i++) {
            char ch = input.charAt(i);
            if (ch != ' ') {
                singleSpace += ch;
                lastWasSpace = false;
            } else if (!lastWasSpace) {
                singleSpace += ' ';
                lastWasSpace = true;
            }
        }

        System.out.println("Remove all: \"" + noSpace + "\"");
        System.out.println("Trim: \"" + trimmed + "\"");
        System.out.println("Single spaces: \"" + singleSpace + "\"");
    }
}
