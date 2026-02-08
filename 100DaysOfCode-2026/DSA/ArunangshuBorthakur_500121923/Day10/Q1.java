
import java.util.*;

class Q1 {

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter String 1: ");
        String s1 = sc.nextLine();
        System.out.print("Enter String 2: ");
        String s2 = sc.nextLine();

        if (s1.equals(s2)) {
            System.out.println("Equal, Equal ignoring case.");
        } else if (s1.equalsIgnoreCase(s2)) {
            System.out.println("Not Equal, Equal ignoring case.");

        } else {
            System.out.println("Not Equal, Not Equal ignoring case. ");
        }

        int res = s1.compareTo(s2);
        if (res < 0) {
            System.out.println("\"" + s1 + "\" comes before " + "\"" + s2 + "\"");
        } else if (res > 0) {
            System.out.println("\"" + s2 + "\" comes before " + "\"" + s1 + "\"");
        } else {
            System.out.println("The Strings are identical.");
        }
    }
}