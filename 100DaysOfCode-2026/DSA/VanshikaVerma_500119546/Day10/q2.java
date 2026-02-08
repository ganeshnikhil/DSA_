import java.util.*;
public class q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        String s = sc.nextLine();
         String all = s.replace(" ", "");
        String trim = s.trim();
        String single;
          String[] parts = s.trim().split("\\s+");
           StringBuilder sb = new StringBuilder();
        for (int i = 0; i < parts.length; i++) {
            sb.append(parts[i]);
            if (i != parts.length - 1) {
                sb.append(" ");
            }
        }
        single = sb.toString();
        System.out.println("Remove all: " + all + ", Trim: " + trim + ", Single spaces: " + single );
    }
}
