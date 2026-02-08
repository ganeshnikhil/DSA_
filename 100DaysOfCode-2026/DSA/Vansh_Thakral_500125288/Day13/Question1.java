import java.util.Scanner;

public class Question1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string:");
        String input = sc.nextLine().trim();

        if (input.isEmpty()) {
            System.out.println("Word count: 0");
            System.out.println("Longest word: \"\"");
            return;
        }

        String[] words = input.split("\\s+");
        String longest = "";
        for (String word : words) {
            if (word.length() > longest.length()) {
                longest = word;
            }
        }

        System.out.println("Word count: " + words.length);
        System.out.println("Longest word: \"" + longest + "\"");
    }
}
