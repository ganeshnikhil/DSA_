// DAY 13 <-----/---> QUE 2

import java.util.Scanner;


public class Ques2 {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        System.out.print("Enter a string: ");
        String input = scanner.nextLine();
        scanner.close();

        boolean result = canFormPalindrome(input);
        System.out.println(result);
    }
    public static boolean canFormPalindrome(String str) {
        int[] freq = new int[26];
        int oddCount = 0;
        for (char ch : str.toLowerCase().toCharArray()) {
            if (ch >= 'a' && ch <= 'z') {
                freq[ch - 'a']++;
            }
        }

        for (int count : freq) {
            if (count % 2 != 0) {
                oddCount++;
            }
        }

        return oddCount <= 1;
    }
}
