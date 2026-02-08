import java.util.Scanner;

public class Question3 {

    static int countPalindrom(String str, int n) {
        if (str == null || str.length() == 0) {
            return 0;
        }

        boolean[][] arr = new boolean[n][n];
        int count = 0;

        // Single character palindromes
        for (int i = 0; i < n; i++) {
            arr[i][i] = true;
            count++;
        }

        // Check all substrings of length 2 or more
        for (int i = n - 2; i >= 0; i--) {
            for (int j = i + 1; j < n; j++) {
                if (str.charAt(i) == str.charAt(j)) {
                    if (j - i == 1 || arr[i + 1][j - 1]) {
                        arr[i][j] = true;
                        count++;
                    }
                }
            }
        }

        return count;
    }

    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter string: ");
        String str = sc.nextLine();

        int result = countPalindrom(str, str.length());
        System.out.println(result);

        sc.close();
    }
}
