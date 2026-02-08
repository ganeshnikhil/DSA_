
import java.util.Scanner;

public class Question2 {

    int max = 0, start = 0, end = 0;

    // Checks if a substring str[i..j] is a palindrome
    boolean isPalindrome(String str, int i, int j) {
        while (i < j) {
            char ch1 = str.charAt(i);
            char ch2 = str.charAt(j);
            if (ch1 != ch2) {
                return false;
            }
            i++;
            j--;
        }
        return true;
    }

    // Returns the longest palindromic substring
    String substringPalindrome(String str) {
        for (int i = 0; i < str.length(); i++) {
            for (int j = i; j < str.length(); j++) {
                if (isPalindrome(str, i, j)) {
                    if ((j - i + 1) > max) {
                        max = j - i + 1;
                        start = i;
                        end = j;
                    }
                }
            }
        }
        return str.substring(start, end + 1);
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();

        Question2 obj = new Question2();
        System.out.println(obj.substringPalindrome(str));
    

        sc.close();
    }
}
