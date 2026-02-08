// DAY 10 <-----/---> QUE 2

import java.util.Scanner;

public class Ques2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.print("Enter the string: ");
        String input = sc.nextLine();


        String removedAll = input.replace(" ", "");
        System.out.print("Removed all : \"" + removedAll + "\", ");

        String trimmed = input.trim();
        System.out.print("Trimmed : \"" + trimmed + "\" ");

        String singleSpaced = trimmed.replaceAll("\\s+", " ");
        System.out.println("Single Spaced : \"" + singleSpaced + "\"");
    }
}
