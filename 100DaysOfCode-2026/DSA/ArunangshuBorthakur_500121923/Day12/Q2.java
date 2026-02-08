
import java.util.*;

class Q2 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String s1 = sc.nextLine();

        System.out.println(remdup(s1));
    }

    public static String remdup(String s1) {
        boolean[] seen = new boolean[1000];
        StringBuilder res = new StringBuilder();

        for (char c : s1.toCharArray()) {
            if (!seen[c]) {
                seen[c] = true;
                res.append(c);
            }
        }
        return res.toString();

    }
}