// Problem Statement: Implement a basic string compression algorithm that replaces repeated characters with the character 
// followed by the count of repetitions. For example, "aabcccccaaa" becomes "a2b1c5a3". If the compressed 
// string is not smaller than the original string, return the original string.
// Task: Compress strings using character count encoding with size optimization.
// Examples Input:"aabcccccaaa"
//  Output:"a2b1c5a3

package DSA.Tanisha_500125283;

public class Day12Question3 {

    public static String compress(String str) {
        if (str == null || str.length() == 0) return str;

        StringBuilder compressed = new StringBuilder();
        int count = 1;
        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                compressed.append(str.charAt(i - 1)).append(count);
                count = 1; 
            }
        }

        // Append last character and its count
        compressed.append(str.charAt(str.length() - 1)).append(count);

        // Return original if compressed string is not shorter
        return compressed.length() < str.length() ? compressed.toString() : str;
    }

    public static void main(String[] args) {
        System.out.println(compress("aabcccccaaa"));
    }
}
