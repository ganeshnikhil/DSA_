import java.util.Scanner;

public class StringComparison {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();

        // Exact equality
        if (str1.equals(str2)) {
            System.out.print("Equal, ");
        } else {
            System.out.print("Not equal, ");
        }

        // Case-insensitive equality
        if (str1.equalsIgnoreCase(str2)) {
            System.out.print("Equal ignoring case, ");
        } else {
            System.out.print("Not equal ignoring case, ");
        }

        // Lexicographical order
        int cmp = str1.compareTo(str2);
        if (cmp == 0) {
            System.out.println("Strings are identical");
        } else if (cmp < 0) {
            System.out.println("\"" + str1 + "\" comes before \"" + str2 + "\"");
        } else {
            System.out.println("\"" + str2 + "\" comes before \"" + str1 + "\"");
        }
    }
}