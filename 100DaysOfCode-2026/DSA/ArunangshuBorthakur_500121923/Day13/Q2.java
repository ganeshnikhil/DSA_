
import java.util.*;

public class Q2 {

    public static boolean isPalindrome(String s) {
        HashSet<Character> oddChars = new HashSet<>();

        for (char c : s.toCharArray()) {
            if (oddChars.contains(c)) {
                oddChars.remove(c); // even count now
            } else {
                oddChars.add(c);    // odd count now
            }
        }

        return oddChars.size() <= 1;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String s = sc.nextLine();

        System.out.println(isPalindrome(s));
    }
}