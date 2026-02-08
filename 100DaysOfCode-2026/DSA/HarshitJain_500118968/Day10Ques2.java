import java.util.Scanner;

public class RemoveSpaces {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();

        // Remove all spaces
        String removeAll = input.replace(" ", "");

        // Trim leading and trailing spaces
        String trim = input.trim();

        // Remove extra spaces between words (single spaces only)
        String singleSpaces = input.trim().replaceAll("\\s+", " ");

        System.out.println("Remove all: \"" + removeAll + "\"");
        System.out.println("Trim: \"" + trim + "\"");
        System.out.println("Single spaces: \"" + singleSpaces + "\"");
    }
}