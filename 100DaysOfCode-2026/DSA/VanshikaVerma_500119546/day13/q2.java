import java.util.Scanner;

public class Q2 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter text: ");
        String s = sc.nextLine();
     

        boolean res = isPalinPossible(s);
        System.out.println(res);
    }

    public static boolean isPalinPossible(String s) {
        int[] freq = new int[26];
        int odd = 0;

    for (char c : s.toLowerCase().toCharArray()) {
            if (c >= 'a' && c <= 'z') {
                freq[c - 'a']++;
          }
    }

        for (int n : freq) {
            if (n % 2 != 0) odd++;
        }

          return odd <= 1;
    }
}
