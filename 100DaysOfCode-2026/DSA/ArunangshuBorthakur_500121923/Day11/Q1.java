
import java.util.*;

class Q1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a sentence: ");
        String line = sc.nextLine();
        System.out.println(isPalindrome(line));
    }

    public static boolean isPalindrome(String line) {
        int l = 0;
        int r = line.length() - 1;

        while (l < r) {
            while (l < r && !Character.isLetterOrDigit(line.charAt(l))) {
                l++;
            }
            while (l < r && !Character.isLetterOrDigit(line.charAt(r))) {
                r--;
            }

            if (Character.toLowerCase(line.charAt(l)) != Character.toLowerCase(line.charAt(r))) {
                return false;
            }
            l++;
            r--;
        }
        return true;
    }
}