import java.util.*;
 
public class Day_12_Question_3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a string:");
        String str = sc.nextLine();

        String compressed = "";
        int count = 1;

        for (int i = 1; i <= str.length(); i++) {
            if (i < str.length() && str.charAt(i) == str.charAt(i - 1)) {
                count++;
            } else {
                compressed += str.charAt(i - 1);
                compressed += count;
                count = 1;
            }
        }

        if (compressed.length() >= str.length()) {
            System.out.println("Compressed string: " + str); // Return original
        } else {
            System.out.println("Compressed string: " + compressed);
        }
    }
}
