import java.util.Scanner;
public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string- ");
        String s = sc.nextLine().toLowerCase();
        boolean palin = true;
        int l = s.length();

        for (int i = 0; i < l / 2; i++) {
            if (s.charAt(i) != s.charAt(l - i - 1)) {
                palin = false;
                break;
            }
        }
        if (palin) 
            System.out.println("true");
        else 
            System.out.println("false");
    }
}
