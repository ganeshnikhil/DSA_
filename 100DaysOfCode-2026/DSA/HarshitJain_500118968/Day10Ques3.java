import java.util.Scanner;
import java.util.Arrays;

public class CheckAnagram {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String str1 = sc.nextLine();
        String str2 = sc.nextLine();

        // Remove spaces and convert to lower case
        String s1 = str1.replaceAll("\\s+", "").toLowerCase();
        String s2 = str2.replaceAll("\\s+", "").toLowerCase();

        // If lengths differ, not anagrams
        if (s1.length() != s2.length()) {
            System.out.println("false");
            return;
        }

        // Convert to char array and sort
        char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();
        Arrays.sort(arr1);
        Arrays.sort(arr2);

        // Compare sorted arrays
        if (Arrays.equals(arr1, arr2)) {
            System.out.println("true");
        } else {
            System.out.println("false");
        }
    }
}