
import java.util.*;

class Q3 {

    public static String compressString(String str) {
        int compressedLength = getCompressedLength(str);

        StringBuilder compressed = new StringBuilder(compressedLength);
        int count = 1;

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                compressed.append(str.charAt(i - 1)).append(count);
                count = 1;
            }
        }

        // Append last character group
        compressed.append(str.charAt(str.length() - 1)).append(count);

        return compressed.toString();
    }

    private static int getCompressedLength(String str) {
        if (str == null || str.isEmpty()) {
            return 0;
        }

        int length = 0;
        int count = 1;

        for (int i = 1; i < str.length(); i++) {
            if (str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                length += 1 + String.valueOf(count).length();
                count = 1;
            }
        }

        length += 1 + String.valueOf(count).length(); // for last character group
        return length;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = sc.nextLine();

        String result = compressString(input);
        System.out.println("Compressed string: " + result);
    }
}
