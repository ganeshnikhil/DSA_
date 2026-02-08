import java.util.*;
public class q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String a = sc.nextLine();
        String b = sc.nextLine();
        a = a.replaceAll(" ", "").toLowerCase();
        b = b.replaceAll(" ", "").toLowerCase();
         if (a.length() != b.length()) 
            System.out.println(false);
     else {
            char[] x = a.toCharArray();
            char[] y = b.toCharArray();
            Arrays.sort(x);
            Arrays.sort(y);
            boolean res = Arrays.equals(x, y);
            System.out.println(res);
    }
    }
}
