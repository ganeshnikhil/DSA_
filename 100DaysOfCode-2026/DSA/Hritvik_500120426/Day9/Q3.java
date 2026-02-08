import java.util.LinkedHashMap;
import java.util.Map;

public class Q3{
    public static Object firstNonRepeatingChar(String s) {
        Map<Character, Integer> freq = new LinkedHashMap<>();
        for (char c : s.toCharArray()) {
            freq.put(c, freq.getOrDefault(c, 0) + 1);
        }
        for (char c : s.toCharArray()) {
            if (freq.get(c) == 1) {
                return c;
            }
        }
        return -1;
    }

    public static void main(String[] args) {
        System.out.println(firstNonRepeatingChar("programming")); 
        System.out.println(firstNonRepeatingChar("aabbcc"));      
        System.out.println(firstNonRepeatingChar("abccba")); 
    }
}
