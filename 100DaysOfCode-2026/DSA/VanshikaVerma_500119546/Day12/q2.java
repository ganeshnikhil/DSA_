import java.util.Scanner;
public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a string: ");
          String str = sc.nextLine().trim();
          StringBuilder res = new StringBuilder();
        
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (res.indexOf(String.valueOf(ch)) == -1) {
                res.append(ch);
            }
    }
        System.out.println(res.toString());
  }
}
