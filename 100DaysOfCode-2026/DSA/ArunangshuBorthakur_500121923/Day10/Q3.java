
import java.util.*;

class Q3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String s1 = sc.nextLine();
        System.out.print("Enter String 2: ");
        String s2 = sc.nextLine();
        System.out.println(isAnagram(s1, s2));

    }

    public static boolean isAnagram(String s1, String s2) {

        s1 = s1.replaceAll("\\s", "").toLowerCase();
        s2 = s2.replaceAll("\\s", "").toLowerCase();

        if (s1.length() != s2.length()) {
            return false;
        }

        int[] f = new int[26];
        for (int i = 0; i < s1.length(); i++) {
            f[s1.charAt(i) - 'a']++;
            f[s2.charAt(i) - 'a']--;
        }

        for (int count : f) {
            if (count != 0) {
                return false;
            }
        }
        return true;

    }
}