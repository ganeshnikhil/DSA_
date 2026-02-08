import java.util.Scanner;
public class Q3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String str = sc.nextLine().trim();
          StringBuilder comp = new StringBuilder();
          int c = 1;

        for (int i = 0; i < str.length(); i++) {
            if (i < str.length() - 1 && str.charAt(i) == str.charAt(i + 1)) {
                c++;
            } else {
                comp.append(str.charAt(i)).append(c);
                c = 1;
            }
        }

        String cstr = comp.toString();
        if (cstr.length() < str.length()) {
            System.out.println(cstr);
        } else {
            System.out.println(str);
        }
    }
}
