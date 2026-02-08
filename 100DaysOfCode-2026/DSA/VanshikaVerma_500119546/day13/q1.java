import java.util.Scanner;

public class Q1 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter text: ");
        String str = sc.nextLine().trim();
        int max = 0, cnt = 0, end = 0, wc = 0;
        boolean in = false;
        for (int i = 0; i < str.length(); i++) {
            char ch = str.charAt(i);
            if (ch != ' ') {
             cnt++;
            if (!in) {
                wc++;
                  in = true;
                }
            } else {
                if (cnt > max) {
                    max = cnt;
                    end = i;
                }
                cnt = 0;
                in = false;
            }
        }
        if (cnt > max) {
            max = cnt;
            end = str.length();
        }

        String lw = (max > 0) ? str.substring(end - max, end) : "";
        System.out.println("Longest word: " + lw);
        System.out.println("Word count: " + wc);
    }
}
