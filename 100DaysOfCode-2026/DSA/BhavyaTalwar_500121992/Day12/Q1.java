
import java.util.*;

class Q1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String s1 = sc.nextLine();
        System.out.print("Enter String 2: ");
        String s2 = sc.nextLine();

        System.out.println(isRotate(s1, s2));
    }

    public static boolean isRotate(String s1, String s2) {
        if (s1.length() != s2.length() || s1.length() == 0) {
            return false;
        }

        String con = s1 + s1;
        return con.contains(s2);
    }
}
