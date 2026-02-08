import java.util.Arrays;
public class Day10Question3 {
    public static String cleanString(String input) {
        return input.replaceAll("\\s+", "").toLowerCase();
    }
    public static boolean areAnagrams(String str1, String str2) {
        String s1 = cleanString(str1);
        String s2 = cleanString(str2);
        if (s1.length() != s2.length()) {
            return false;
        }
       char[] arr1 = s1.toCharArray();
        char[] arr2 = s2.toCharArray();

        Arrays.sort(arr1);
        Arrays.sort(arr2);

        return Arrays.equals(arr1, arr2);
    }

    public static void main(String[] args) {
        String[][] testCases = {
            {"listen", "silent"},
            {"hello", "world"},
            {"The Eyes", "They See"}
        };

        for (String[] pair : testCases) {
            String str1 = pair[0];
            String str2 = pair[1];
            System.out.println("String1: \"" + str1 + "\", String2: \"" + str2 + "\"");
            System.out.println("Are anagrams? " + areAnagrams(str1, str2));
            System.out.println();
        }
    }
}
