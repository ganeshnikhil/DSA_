import java.util.*;
public class Day_13_Q_2{
    public static boolean hasPalindromePermutation(String theString) {
    Map<Character, Integer> dict = new HashMap<>();

    for (Character c : theString.toCharArray()) {
        if (dict.get(c) == null) {
            dict.put(c, 1);
        } else {
            dict.put(c, dict.get(c) + 1);
        }
    }

    int notOddChar = 0;
    for (Integer val : dict.values()) {
        if (val % 2 != 0) {
            notOddChar += 1;
        }
    }
    if (notOddChar > 1) {
        return false;
    }

    return true;
}
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String input = sc.nextLine();
        System.out.println(hasPalindromePermutation(input));

        
        sc.close();
    }
}
