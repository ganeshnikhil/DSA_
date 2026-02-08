
import java.util.*;

class Q3 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a String: ");
        String s = sc.nextLine();
        char res = rep(s);
        if (res == 0) {
            System.out.println(-1);
        } else {
            System.out.println("First non-repeating character: " + res);
        }
    }

    public static char rep(String s) {

        if (s == null || s.isEmpty()) {
            return 0;
        }

        Map<Character, Integer> m = new LinkedHashMap<>();

        for (char c : s.toCharArray()) {
            m.put(c, m.getOrDefault(c, 0) + 1);
        }

        for (Map.Entry<Character, Integer> entry : m.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey();
            }
        }
        return 0;
    }
}
