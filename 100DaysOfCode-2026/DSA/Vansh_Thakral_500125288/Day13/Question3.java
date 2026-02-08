import java.util.Scanner;

public class Question3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the string:");
        String input = sc.nextLine().trim();

        if (input.isEmpty()) {
            System.out.println("");
            return;
        }

        String[] words = input.trim().split("\\s+");
        for (int i = words.length - 1; i >= 0; i--) {
            System.out.print(words[i]);
            if (i != 0) System.out.print(" ");
        }
        System.out.println();
    }
}
