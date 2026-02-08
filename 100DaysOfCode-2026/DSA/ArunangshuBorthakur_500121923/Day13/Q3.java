
import java.util.*;

public class Q3 {

    public static String reverseWords(String s) {
        int n = s.length();
        StringBuilder result = new StringBuilder();
        int end = n - 1;

        while (end >= 0) {
            while (end >= 0 && s.charAt(end) == ' ') {
                end--;
            }

            if (end < 0) {
                break;
            }

            int start = end;
            while (start >= 0 && s.charAt(start) != ' ') {
                start--;
            }

            result.append(s.substring(start + 1, end + 1));
            result.append(" ");

            end = start - 1;
        }

        return result.toString().trim();
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        System.out.println(reverseWords(s));
    }
}