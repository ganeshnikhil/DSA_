import java.util.*;

public class Day_10_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String 1:");
        String s1 = sc.nextLine();
        System.out.println("Enter String 2:");
        String s2 = sc.nextLine();

        boolean equal = true;
        boolean equalIgnoreCase = true;

        // Check exact equality
        if (s1.length() != s2.length()) {
            equal = false;
        } else {
            for (int i = 0; i < s1.length(); i++) {
                if (s1.charAt(i) != s2.charAt(i)) {
                    equal = false;
                    break;
                }
            }
        }

        // Check equality ignoring case
        if (s1.length() == s2.length()) {
            for (int i = 0; i < s1.length(); i++) {
                char c1 = s1.charAt(i);
                char c2 = s2.charAt(i);

                if (c1 >= 'A' && c1 <= 'Z') c1 = (char)(c1 + 32);
                if (c2 >= 'A' && c2 <= 'Z') c2 = (char)(c2 + 32);

                if (c1 != c2) {
                    equalIgnoreCase = false;
                    break;
                }
            }
        } else {
            equalIgnoreCase = false;
        }

        // Lexicographical comparison
        int len = Math.min(s1.length(), s2.length());
        String lexResult = "";
        for (int i = 0; i < len; i++) {
            if (s1.charAt(i) < s2.charAt(i)) {
                lexResult = "\"" + s1 + "\" comes before \"" + s2 + "\"";
                break;
            } else if (s1.charAt(i) > s2.charAt(i)) {
                lexResult = "\"" + s2 + "\" comes before \"" + s1 + "\"";
                break;
            }
        }

        if (lexResult.equals("")) {
            if (s1.length() == s2.length()) {
                lexResult = "Strings are identical";
            } else if (s1.length() < s2.length()) {
                lexResult = "\"" + s1 + "\" comes before \"" + s2 + "\"";
            } else {
                lexResult = "\"" + s2 + "\" comes before \"" + s1 + "\"";
            }
        }

        System.out.println(equal ? "Equal" : "Not equal");
        System.out.println(equalIgnoreCase ? "Equal ignoring case" : "Not equal ignoring case");
        System.out.println(lexResult);
    }
}
