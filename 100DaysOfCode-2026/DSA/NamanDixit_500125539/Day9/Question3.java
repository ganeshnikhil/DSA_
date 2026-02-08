import java.util.*;

public class Question3 {

    public static char findFirstUniqueChar(String input) {
        Map<Character, Integer> map = new LinkedHashMap<>();

        // Count frequency of each character
        for (int i = 0; i < input.length(); i++) {
            char ch = input.charAt(i);
            if (map.containsKey(ch)) {
                map.put(ch, map.get(ch) + 1);
            } else {
                map.put(ch, 1);
            }
        }

        // Find and return the first character with frequency 1
        for (Map.Entry<Character, Integer> entry : map.entrySet()) {
            if (entry.getValue() == 1) {
                return entry.getKey();
            }
        }

        return '-'; // Or you can return (char)-1 if preferred
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine();

        char result = findFirstUniqueChar(str);
        if (result == '-') {
            System.out.println("-1");
        } else {
            System.out.println("First unique character: " + result);
        }

        sc.close();
    }
}
