import java.util.*;

public class Day_9_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String str = sc.nextLine();

        int[] freq = new int[256]; // ASCII table

        // Count frequencies
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            freq[ch]++;
        }

        // Find first non-repeating
        char result = '-';
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (freq[ch] == 1) {
                result = ch;
                break;
            }
        }

        if (result == '-') {
            System.out.println("-1");
        } else {
            System.out.println("First non-repeating character: '" + result + "'");
        }
    }
}
