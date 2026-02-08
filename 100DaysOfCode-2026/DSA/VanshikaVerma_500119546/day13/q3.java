import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter text: ");
        String s = sc.nextLine();

        String[] w = s.trim().split("\\s+");
        StringBuilder sb = new StringBuilder();

        for (int i = w.length - 1; i >= 0; i--) {
           sb.append(w[i]);
        if (i > 0) sb.append(" ");
        }

        System.out.println(sb.toString());
}
}
