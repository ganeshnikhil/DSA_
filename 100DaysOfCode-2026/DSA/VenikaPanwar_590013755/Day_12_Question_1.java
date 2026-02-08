import java.util.*;
 
public class Day_12_Question_1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter String 1:");
        String s1 = sc.nextLine();
        System.out.println("Enter String 2:");
        String s2 = sc.nextLine();

        if (s1.length() != s2.length()) {
            System.out.println("false");
            return;
        }

        // Concatenate s1 to itself
        String doubled = s1 + s1;

        // Manual substring search
        boolean isRotation = false;
        for (int i = 0; i <= doubled.length() - s2.length(); i++) {
            boolean match = true;
            for (int j = 0; j < s2.length(); j++) {
                if (doubled.charAt(i + j) != s2.charAt(j)) {
                    match = false;
                    break;
                }
            }
            if (match) {
                isRotation = true;
                break;
            }
        }

        System.out.println(isRotation);
    }
}
