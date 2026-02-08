import java.util.*;

public class Question1 {

    public static boolean checkPalindrome(String str) {
        // Remove non-alphabetic characters and convert to lowercase
        str = str.replaceAll("[^a-zA-Z]", "").toLowerCase();

        // Reverse the cleaned string
        String reversed = "";
        for (int i = str.length() - 1; i >= 0; i--) {
            reversed += str.charAt(i);
        }

        // Compare original and reversed strings
        return str.equals(reversed);
    }

    public static void main(String args[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String: ");
        String input = sc.nextLine();

        boolean result = checkPalindrome(input);
        System.out.println(result); // prints true or false

        sc.close();
    }
}
