import java.util.*;

public class Day_10_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter String 1:");
        String s1 = sc.nextLine();
        System.out.println("Enter String 2:");
        String s2 = sc.nextLine();

        // Clean both strings: remove spaces and make lowercase
        String clean1 = "", clean2 = "";

        for (int i = 0; i < s1.length(); i++) {
            char ch = s1.charAt(i);
            if (ch != ' ') {
                if (ch >= 'A' && ch <= 'Z') ch = (char)(ch + 32);
                clean1 += ch;
            }
        }

        for (int i = 0; i < s2.length(); i++) {
            char ch = s2.charAt(i);
            if (ch != ' ') {
                if (ch >= 'A' && ch <= 'Z') ch = (char)(ch + 32);
                clean2 += ch;
            }
        }

        if (clean1.length() != clean2.length()) {
            System.out.println("false");
            return;
        }

        int[] freq = new int[26];

        for (int i = 0; i < clean1.length(); i++) {
            freq[clean1.charAt(i) - 'a']++;
        }

        for (int i = 0; i < clean2.length(); i++) {
            freq[clean2.charAt(i) - 'a']--;
        }

        boolean isAnagram = true;
        for (int i = 0; i < 26; i++) {
            if (freq[i] != 0) {
                isAnagram = false;
                break;
            }
        }

        System.out.println(isAnagram);
    }
}
