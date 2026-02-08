import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String input = sc.nextLine();
        String removeAll = input.replace(" ", "");
        String trim = input.trim();
        String singleSpaces = input.trim().replaceAll("\\s+", " ");

        System.out.println("Remove all: \"" + removeAll + "\"");
        System.out.println("Trim: \"" + trim + "\"");
        System.out.println("Single spaces: \"" + singleSpaces + "\"");
    }
}
