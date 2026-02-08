import java.util.*;

public class Question3 {

    // Compress string using RLE and return original if compression isn't smaller
    public static String compress(String str) {
        if (str == null || str.isEmpty()) return str;

        StringBuilder compressed = new StringBuilder();
        int count = 1; // To count repeated characters

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                compressed.append(str.charAt(i - 1)).append(count);
                count = 1;
            }
        }
        // Append the last character group
        compressed.append(str.charAt(str.length() - 1)).append(count);

        // Return compressed string only if it's shorter
        return compressed.length() < str.length() ? compressed.toString() : str;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string to compress: ");
        String input = sc.nextLine();

        String result = compress(input);
        System.out.println("Compressed: " + result);

        sc.close();
    }
}
