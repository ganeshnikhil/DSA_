import java.util.*;
class Question1{

    // Method to compare two strings in multiple ways
    static void compareStrings(String str1, String str2) {

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

        // Lexicographical comparison
        int result = str1.compareTo(str2);
        if (result == 0) {
            System.out.println("Strings are identical.");
        } else if (result < 0) {
            System.out.print(str1 + "\" comes before \"" + str2 + "\".");
        } else {
            System.out.print(str1 + "\" comes after \"" + str2 + "\".");
        }
    }

public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter 1st string: ");
        String str1 = sc.nextLine();

        System.out.print("Enter 2nd string: ");
        String str2 = sc.nextLine();

        compareStrings(str1, str2);

        sc.close();
    }
}
