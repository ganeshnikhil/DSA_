import java.util.*;
public class q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        if (a.equals(b)) 
            System.out.println("Equal, Equal ignoring case, Strings are identical");
         else {
            String r1 = "Not equal";
            String r2;
            if (a.equalsIgnoreCase(b))
            r2 = "Equal ignoring case";
             else 
            r2 = "Not equal ignoring case";

            String r3;
            int cmp = a.compareTo(b);
            if (cmp < 0) {
                r3 = "\""+ a +"\" comes before \"" +b + "\"";
            } else if (cmp > 0) {
                r3 = "\""+ b + "\" comes before \"" + a + "\"";
            } else 
                r3 = "Strings are identical";
            System.out.println(r1 + ", " + r2 + ", " + r3);
    }
    }
}
